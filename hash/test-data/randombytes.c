#include <stdio.h>

void randombytes(unsigned char * ptr,unsigned int length) 
{
	char failed = 0;
	FILE* fh = fopen("/dev/urandom", "rb");
	if (fh != NULL) {
		if (fread(ptr, length, 1, fh) == 0) {
			failed = 1;
		}
		fclose(fh);
	} else {
		failed = 1;
	}
}
