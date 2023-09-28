#include "main.h"

/**
 * binary_to_uint - converts char binary to an unsigned int
 * @b: char binary
 * Return: Alwayys 0 (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		/**check for valid char*/
		if (*b != '0' && *b != '1')
			return (0);

		value = value * 2 + (*b - '0');
		b++;
	}
	return (value);
}
