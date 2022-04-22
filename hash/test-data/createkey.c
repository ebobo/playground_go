#include <stdio.h>
#include "tweetnacl.h"

int main(int argc, char *argv[]) {
	char * pkFile = argv[1];
	char * skFile = argv[2];

    unsigned char pk[64]; // public key
    unsigned char sk[64]; // secret key

    crypto_sign_keypair(pk, sk);

    FILE *pkOutput = fopen(pkFile,"w");
    FILE *skOutput = fopen(skFile,"w");
    fwrite(pk, 1, 32, pkOutput);
    fwrite(sk, 1, 64, skOutput);

    fclose(pkOutput);
    fclose(skOutput);
    
    return 0;
}
