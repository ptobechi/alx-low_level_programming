#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: The hash table
 * @key: The key
 * Return: The value associated with the key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index where the key should be stored */
	index = key_index((unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the calculated index */
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value); /* Key found */
		}
		current = current->next;
	}

	return (NULL); /* Key not found */
}

