#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbeer from 0 to 9
 * Return: Always void (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar("%d",i);
	}
	_putchar("\n");
	return (void);
}
