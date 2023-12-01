#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
		return 0;

	/* Get the index where the key should be stored */
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists, update its value if it does */
	hash_node_t *current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Duplicate the value and update it */
			char *new_value = strdup(value);
			if (new_value == NULL)
				return 0;

			/* Free the old value and update the node */
			free(current->value);
			current->value = new_value;
			return 1;
		}
		current = current->next;
	}

	/* Key doesn't exist, create a new node */
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;

	/* Duplicate the key and value */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return 0;
	}

	/* Add new node at the beginning of the list in case of collision */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}

