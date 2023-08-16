#include <stdio.h>

/**
 * array_iterator - Executes functions in an array
 * @size: sizeof the array
 * @action: a function pointer
 * @array: array of element
 * Return: Always 0 (Success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
