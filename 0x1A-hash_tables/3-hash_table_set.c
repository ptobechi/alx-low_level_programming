#include "hash_tables.h"

/**
 * create_node - Create a new hash node
 * @key: The key
 * @value: The value
 * Return: A pointer to the newly created node, or NULL on failure
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}

	return (new_node);
}

/**
 * update_existing_key - Update the value of an existing key
 * @current: The existing node
 * @value: The new value
 * Return: 1 on success, 0 on failure
 */
static int update_existing_key(hash_node_t *current, const char *value)
{
	char *new_value = strdup(value);

	if (new_value == NULL)
		return (0);

	free(current->value);
	current->value = new_value;

	return (1);
}

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
		return (0);

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (update_existing_key(current, value));

		current = current->next;
	}

	hash_node_t *new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

