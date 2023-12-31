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
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
