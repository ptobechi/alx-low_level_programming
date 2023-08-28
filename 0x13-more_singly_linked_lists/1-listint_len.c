#include "lists.h"

/**
 * listint_len - return the number of element in a list
 * @h: list head
 *
 * Return: Always 0 (Success)
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* initialize count for number of element*/

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

