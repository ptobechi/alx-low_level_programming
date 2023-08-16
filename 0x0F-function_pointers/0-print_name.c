#include <stdio.h>

/**
 * print_name - prinnts a name
 * @name: string name
 * Return: Always 0 (success)
*/
void print_name(char *name, void (*f)(char *))
{
	char *str = f(name);

	printf("%s", str);
}
