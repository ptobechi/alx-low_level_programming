#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: an array of integer
 * @size: number of array element
 * @cmp: function pointer to compare integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, found;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			found = cmp(array[i]);
			if (found)
			{
				return (array[i]);
			}
			else
			{
				return (-1);
			}
		}
	}
}
