#include <stdio.h>
#include <stdlib.h>
#include "lic_key_decode.h"
#include "tweetnacl.h"
#include "read_file.h"

int main(int argc, char *argv[]) 
{
    unsigned char * licKeyBuffer = 0;
	unsigned char * pkBuffer = 0;
	unsigned char * panelHash = 0;
	unsigned char * panelValue = 0;
	long panelValueLength = 0;

    if (read_file(argv[1], &licKeyBuffer, 0) != 0) {
        fprintf (stderr, "\nFailed to read license key\n");
        return -1;
    }

    if (read_file(argv[2], &pkBuffer, 0) != 0) {
        free(licKeyBuffer);
        fprintf (stderr, "\nFailed to read public key\n");
        return -1;
    }

    if (read_file(argv[3], &panelHash, 0) != 0) {
        free(licKeyBuffer);
        free(pkBuffer);
        fprintf (stderr, "\nFailed to read external hash\n");
        return -1;
    }

    if (read_file(argv[4], &panelValue, &panelValueLength) != 0) {
        free(licKeyBuffer);
        free(pkBuffer);
        free(panelHash);
        fprintf (stderr, "\nFailed to read external hash\n");
        return -1;
    }

    LicenseData ld;
    LicenseData ld2;
    // Will always be 32 long
    unsigned char feature_secret[32];

    int res = decode_license(
            licKeyBuffer,
            pkBuffer,
            panelHash,
            panelValue,
            panelValueLength,
            feature_secret,
            &ld
        );

    if (res == 0) {
        fprintf (stderr, "\nDecoded license data");
        fprintf (stderr, "\nFeatures: %llu", ld.features);
        fprintf (stderr, "\nClasses: %llu", ld.classes);
        fprintf (stderr, "\nExpiry date: %i-%02d-%02d\n", ld.expiry_year, 
                                                      ld.expiry_month,
                                                      ld.expiry_day);
    }
    else {
        fprintf (stderr, "\nKey decode failed %i\n", res);
    }

    if (ld.verified) {
        fprintf (stderr, "\nLicense verified against hardware\n");
    }
    else {
        fprintf (stderr, "\nLicense key NOT verified against hardware\n");
    }

    fprintf (stderr, "\nDecode using feature_secret instead");

    int res2 = decode_license(
            licKeyBuffer,
            pkBuffer,
            panelHash,
            feature_secret,
            32,
            0,
            &ld2
        );

    if (res2 == 0) {
        fprintf (stderr, "\nDecoded license data");
        fprintf (stderr, "\nFeatures: %llu", ld2.features);
        fprintf (stderr, "\nClasses: %llu", ld2.classes);
        fprintf (stderr, "\nExpiry date: %i-%02d-%02d\n", ld2.expiry_year, 
                                                      ld2.expiry_month,
                                                      ld2.expiry_day);
    }
    else {
        fprintf (stderr, "\nKey decode failed %i\n", res2);
    }

    if (ld2.verified) {
        fprintf (stderr, "\nLicense verified against panel hash\n");
    }
    else {
        fprintf (stderr, "\nLicense key NOT verified against panel hash\n");
    }

    free(licKeyBuffer);
    free(pkBuffer);
    free(panelHash);
    free(panelValue);

    return res;
}
