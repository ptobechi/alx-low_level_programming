#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * supdate_existing_key - Update the value of an existing key
 * @current: The existing node
 * @value: The new value
 * Return: 1 on success, 0 on failure
 */
int supdate_existing_key(shash_node_t *current, const char *value)
{
	char *new_value = strdup(value);

	if (new_value == NULL)
		return (0);

	free(current->value);
	current->value = new_value;

	return (1);
}

/**
 * shash_table_set - Add an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *current = NULL;
	shash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (supdate_existing_key(current, value));
		current = current->next;
	}

	new_node = screate_node(key, value);

	if (new_node == NULL)
		return (0);

	insert_sorted_node(ht, new_node);
	ht->array[index] = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieve a value associated with a key from the
 * sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * Return: The value associated with the key, or NULL if key
 * couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *current = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;

	if (ht == NULL)
		return;

	current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;

	if (ht == NULL)
		return;

	current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current = ht->shead;
	shash_node_t *next;

	if (ht == NULL)
		return;

	current = ht->shead;

	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}

	free(ht->array);
	free(ht);
}

/**
 * screate_node - Create a new hash node
 * @key: The key
 * @value: The value
 * Return: A pointer to the newly created node, or NULL on failure
 */
shash_node_t *screate_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

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
 * insert_sorted_node - Insert a node into the sorted linked list
 * @ht: The sorted hash table
 * @new_node: The node to insert
 */
void insert_sorted_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current = ht->shead;

	if (current == NULL || strcmp(new_node->key, current->key) < 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
		return;
	}

	while (current->snext != NULL && strcmp(new_node->key,
				current->snext->key) > 0)
		current = current->snext;

	new_node->snext = current->snext;
	new_node->sprev = current;
	if (current->snext != NULL)
		current->snext->sprev = new_node;
	else
		ht->stail = new_node;
	current->snext = new_node;
}

