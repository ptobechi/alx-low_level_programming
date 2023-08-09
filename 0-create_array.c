#include <stdlib.h>

/**
 * create_array - creates an array of char and initialize it with a specific char
 * @size: size of array
 * @c: char
 * Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
	char *c_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	c_array = malloc(sizeof(c) * size);

	if (c_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		c_array[i] = c;

	return (c_array);
}
