#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: seperators for each numbers
 * @n: list number to print
 * Return: Always 0 (Success)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list list;

	if (seperator == NULL)
		return (0);
	var_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s ", var_arg(list, int), seperator);
	}
	va_end(list);
	printf("\n");
}
