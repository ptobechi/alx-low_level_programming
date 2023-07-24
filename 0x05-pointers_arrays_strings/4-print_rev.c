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
	size_t len;

	len = strlen(s);

	for (; len > 0; len--)
	{
		printf("%c", s[len]);
	}
}
