#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "lic_key_decode.h"
#include "tweetnacl.h"
#include "base64.h"

static unsigned long long read_ull_le(const unsigned char *arr, int bytes) 
{
    unsigned long long result = arr[0];
    result &= 0xFF;
    for (int i = 1; i < bytes; i++) {
        result |= arr[i] << 8 * i;
    }
    return result;
}

int decode_license(
	const unsigned char *license_key,
	const unsigned char *public_key, 
	const unsigned char *panel_data_hash, 
    const unsigned char *panel_value,
    const unsigned int panel_value_len, 
    unsigned char *feature_secret,
	LicenseData *lic_data)
{
    // The incoming key is base64, decode it
    int signed_lic_key_len = Base64decode_len((char *)license_key);
    if (signed_lic_key_len > 265) {
        // Currently supported keys are version 2, signed length 265 bytes. 
        return ERR_LICENSE_TOO_LONG;
    }

    unsigned char signed_lic_key[265];
    Base64decode(&((char*)signed_lic_key)[0], (char *)license_key);


    // Check the license version
    if (signed_lic_key[LICENSE_VERSION] != 0x02) {
        // Only support version 2
        return ERR_LICENSE_VERSION_NOT_SUPPORTED;
    }

    // Read out length of license data
    unsigned long long lic_key_len = read_ull_le(&signed_lic_key[LICENSE_KEY_LENGTH], 2);

    if (lic_key_len > 260) {
        return ERR_LICENSE_DATA_TOO_LONG;
    }

    // Rest of data is the signature
    const unsigned char * signature = &signed_lic_key[SIGNED_LICENSE_DATA_START];

    // Open signature to verify it and retrieve the signed over information 
    unsigned char signed_data[264];
    unsigned long long signed_data_len;
    int verification_result = crypto_sign_open(&signed_data[0], 
                                               &signed_data_len, 
                                               signature, lic_key_len, 
                                               public_key);


    if (verification_result != 0) {
        // Failed to verify signature against public key
        lic_data->verified = false;
        return ERR_LICENSE_SIGNATURE_VERIFICATION_FAILED; 
    }

    // Set up data arrays used in decryption
    // The NaCl C API requires the use of a front padding of 0 bytes for certain
    // inputs and expected outputs
    const int BOXZEROBYTES = crypto_secretbox_BOXZEROBYTES;
    unsigned char cfg_hash[CFG_HASH_LENGTH];
    unsigned char nonce_features[NONCE_LENGTH];
    unsigned char nonce_secret[NONCE_LENGTH];
    unsigned char box_features[BOXZEROBYTES + FEATURES_BOX_LENGTH];
    unsigned char box_secret[BOXZEROBYTES + SECRET_BOX_LENGTH];
    // For reasons not yet known, there are 2 times the zerobytes at the front of
    // the decoded messages
    unsigned char secret[BOXZEROBYTES * 2 + 32];
    unsigned char plain_lic_data[BOXZEROBYTES * 2 + 20];


    int j = 0;

    // Extract hash to compare with panel_hash input
    for (size_t i = 0; i < CFG_HASH_LENGTH; ++i, ++j) {
        cfg_hash[i] = signed_data[j]; 
    }

    // Extract the nonces that will be used in decryption
    for (size_t i = 0; i < NONCE_LENGTH; ++i, ++j) {
        nonce_features[i] = signed_data[j]; 
        nonce_secret[i] = signed_data[j + NONCE_LENGTH]; 
    }

    j += NONCE_LENGTH;

    // Must zeropad cipher inputs in C API
    for (size_t i = 0; i < BOXZEROBYTES; ++i) {
        box_features[i] = 0;
        box_secret[i] = 0;
    }

    // Extract the encrypted features box
    for (size_t i = BOXZEROBYTES; i < FEATURES_BOX_LENGTH + BOXZEROBYTES; ++i, ++j) {
        box_features[i] = signed_data[j]; 
    }

    // Extract the encrypted features secret box
    for (size_t i = BOXZEROBYTES; i < SECRET_BOX_LENGTH + BOXZEROBYTES; ++i, ++j) {
        box_secret[i] = signed_data[j]; 
    }

    // Set up the key to be used in decryption
    unsigned char key[32];
    int k = 0;

    // Initial attempt is for the features secret box
    for (; k < panel_value_len; k++) {
        key[k] = panel_value[k];
    }
    for(; k < 32; k++) {
        // Pad if shorter than 32
        key[k] = 'A';
    }

    // Attempt to open the features secret box
    int secret_open_res = crypto_secretbox_open(
        secret, box_secret, SECRET_BOX_LENGTH + BOXZEROBYTES, 
        nonce_secret, key
    );

    int lic_data_open_res = -1;
    if (secret_open_res == 0) {
        // Features secret box was opened
        // Now insert decoded secret into key
        for (k = 0; k < 32; k++) {
            key[k] = secret[k + BOXZEROBYTES * 2];
        }

        // Attempt to open the features data
        lic_data_open_res = crypto_secretbox_open(
            plain_lic_data, box_features, FEATURES_BOX_LENGTH + BOXZEROBYTES,
            nonce_features, key 
        );

        // Extract the feature secret so it can be returned to caller
        for (unsigned long long i = 0; i < FEATURE_SECRET_LENGTH; i++) {
            feature_secret[i] = secret[i + BOXZEROBYTES * 2];
        }

        lic_data->feature_secret = true;
    }
    else {
        // We failed to open the features secret box, so then the panel value is
        // possibly the secret to the features instead, try to open
        lic_data_open_res = crypto_secretbox_open(
            plain_lic_data, box_features, FEATURES_BOX_LENGTH + BOXZEROBYTES,
            nonce_features, key 
        );

        lic_data->feature_secret = false;
    }

    if (lic_data_open_res != 0) {
        // We were not able to open any encrypted boxes
        return ERR_LICENSE_UNPACK_FAILED;
    }

    // An additional check to see that the panel hash in input is the same as
    // the one in the signature payload
    for (unsigned long long i = 0; i < CFG_HASH_LENGTH; ++i) {
        if (cfg_hash[i] != panel_data_hash[i]) {
            verification_result = -1;
        }
    }

    // Do the extraction of the feature data into the LicenseData structure
    for (size_t i = 0; i < 20; ++i) {
        plain_lic_data[i] = plain_lic_data[i + BOXZEROBYTES * 2];    
    }

    lic_data->verified = verification_result == 0;
    lic_data->lic_version = 0x02;

    unsigned int key_version = plain_lic_data[KEY_VERSION];
    for (int k = 1; k < 4; k++) {
        key_version |= plain_lic_data[k] << 8 * k;
    }

    lic_data->key_version = key_version;
    lic_data->features = read_ull_le(&plain_lic_data[FEATURES_START], 6);
    lic_data->classes = read_ull_le(&plain_lic_data[CLASSES_START], 6);
    
    // Expiry date values
    lic_data->expiry_year = plain_lic_data[EXPIRY_DATE] * 100 + 
                            plain_lic_data[EXPIRY_DATE + 1];
    lic_data->expiry_month = plain_lic_data[EXPIRY_DATE + 2];
    lic_data->expiry_day = plain_lic_data[EXPIRY_DATE + 3];

    return 0;
}

bool has_feature(int feature, LicenseData *lic_data)
{
    switch (feature) {
    case DEMO:
        return lic_data->features | 0x1;
        break;
    case COVER_DETECTION:
        return lic_data->features | 0x2;
        break;
    case SELF_VERIFY:
        return lic_data->features | 0x4;
        break;
    case ANALOGUE_VALUES:
        return lic_data->features | 0x8;
        break;
    case OPTICAL_INTEGRITY:
        return lic_data->features | 0x10;
        break;
    default:
        return false;
    }
}

bool has_feature_with_class(int feature, int class, LicenseData *lic_data)
{
    // Not any supported such as of now
    return false;
}
