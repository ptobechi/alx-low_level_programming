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

	l = 0;
	
	for (; l <= strlen(s); l--)
	{
		printf"%c", (s[l]);
	}
}
