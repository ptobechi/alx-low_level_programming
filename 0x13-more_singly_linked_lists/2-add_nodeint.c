#include "main.h"

/**
 * add_nodeint - add element to the beggining of a list
 * @head: list head
 * @n: element to add
 *
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	/* returns null if mem alloc fail */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* initialize the value of the lust */
	new_node->next = *head; /* links list current head */

	*head = new_node; /* setsthe head of the list to the new node */

	return (new_node);
}
