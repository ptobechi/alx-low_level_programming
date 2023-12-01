#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Use the hash_djb2 function to calculate the hash value */
	unsigned long int hash_value = hash_djb2(key);

	/* Modulo operation to get the index within the size of the array */
	return (hash_value % size);
}

