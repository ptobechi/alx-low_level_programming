#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 * Result: Always 0 (Succes)
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf(*s);
	_puts_recursion(s + 1);
}
