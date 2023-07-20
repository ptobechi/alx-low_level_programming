#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0 - 9 except 2 and 4
 * Return: Always void (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
