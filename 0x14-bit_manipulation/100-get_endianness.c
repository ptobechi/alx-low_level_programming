#include "main.h"

/**
 * get_endianness - checks the endianess
 *
 * Retun: Always 0 (success)
*/
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	return (*ptr == 1);
}
