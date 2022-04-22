#include "read_file.h"

int read_file(char *file_name, unsigned char **output, long *output_length)
{
	long length;
	FILE * file = fopen (file_name, "rb");
	if (file)
	{
	    fseek (file, 0, SEEK_END);
	    length = ftell (file);
	    fseek (file, 0, SEEK_SET);
	    *output = malloc (length);

        if (output_length) {
            (*output_length) = length;
        }

	    if (*output)
	    {
	        fread (*output, 1, length, file);
	    }
        else {
            return -1;
        }
        fclose(file);
	}
    else {
        return -1;
    }
}
