#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; ++i)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if ((i < ht->size - 1 || current->next != NULL)
				&& printed)
				printf(", ");
			current = current->next;
		}
	}
	printf("}\n");
}

