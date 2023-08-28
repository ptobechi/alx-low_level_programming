#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /* The number of nodes on the list */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++; /* update the count */

		h = h->next; /* move to the next node */
	}
	return (count);
}
