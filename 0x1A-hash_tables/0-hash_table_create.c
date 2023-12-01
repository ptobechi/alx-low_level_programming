#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0)
		return NULL;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return NULL;

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return NULL;
	}

	/* Initialize each element of the array to NULL */
	for (unsigned long int i = 0; i < size; ++i)
	{
		new_table->array[i] = NULL;
	}

	return new_table;
}

