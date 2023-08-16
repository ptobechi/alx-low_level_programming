#include <stdio.h>

/**
 * print_name - prinnts a name
 * @name: string name
 * @f: a function pointer
 * Return: Always 0 (success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
