#include <stdio.h>

/*
 * print_listint - prints all element of a linked list
 * @h: head of the list
 * Return: Always 0 (Successw)
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /* The number of nodes on the list */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++; /* update the count */

		h->next; /* move to the next node */
	}
	return (count);
}
