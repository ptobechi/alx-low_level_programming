#include "main.h"

/**
 * get_bit - return bit as a given index
 * @n: number
 * @index: index
 *
 * Return: Always 0 (Success)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
