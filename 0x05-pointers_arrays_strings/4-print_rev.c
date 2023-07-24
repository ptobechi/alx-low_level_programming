#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	size_t l;

	l = strlen(s);
	
	for (; l <= 0; l--)
	{
		printf("%c", s[l]);
	}
}
