#include "main.h"

/**
 * clear_bit - set value of abit to 0
 * @n: number
 * @index:number index
 *
 * Return: Always 0 (Success)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index  >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
