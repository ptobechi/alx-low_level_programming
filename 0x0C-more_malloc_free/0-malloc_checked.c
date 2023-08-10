#include <stdlib.h>
/**
 * malloc_checked - Allocatees memory using malloc
 * @b: amount of memory allocation (bytes)
 * Return: Always 0 (success)
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
