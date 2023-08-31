#include "main.h"

/**
 * binary_to_uint - converts char binary to an unsigned int
 * @b: char binary
 * Return: Alwayys 0 (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int c_value = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1') /* check for valid char*/
			return (0);
		c_value = c_value * 2 + (*b - '0');
		b++;
	}
	return (c_value);
}
