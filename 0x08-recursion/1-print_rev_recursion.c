#include <stdio.h>

/**
 * _print_rev_recursion - prints the string in reverse
 * @s: string value
 * Return: Always void (Success)
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%d", *s);
	}
}
