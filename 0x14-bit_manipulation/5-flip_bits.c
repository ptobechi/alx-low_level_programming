#include "main.h"

/**
 * flip_bits - return number of bit to flip
 * @n: number
 * @m: second number
 *
 * Return: Always 0 (Success)
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int count = 0;

	while (xor_value > 0)
	{
		if (xor_value & 1)
			count++;
		xor_value >>= 1;
	}

	return (count);
}
