#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: seperators for each numbers
 * @n: list number to print
 * Return: Always 0 (Success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			char *str = va_arg(list, char *);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");

			if (separator && i != n - 1)
				printf("%s", separator);
		}
		va_end(list);
		printf("\n");
	}
}
