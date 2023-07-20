#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers from 0 - 9 except 2 and 4
 * Return: Always void (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 AND i != 4)
		{
			_putchar("%d",i);
		}
	}
	_putchar("\n");
}
