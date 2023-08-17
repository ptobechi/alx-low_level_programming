#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: seperators for each numbers
 * @n: list strings to print
 * Return: Always 0 (Success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	var_list list;

	if (seperator == NULL)
		return (0);
	var_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%s%s ", var_arg(list, char *), seperator);
	}
	printf("\n");
}
