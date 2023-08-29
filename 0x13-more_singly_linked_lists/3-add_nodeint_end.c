#include "lists.h"

/**
 * add_nodeint_end - add element to the end of the list
 * @head: pointer to the head struct pointer
 * @n: element
 *
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (listint_t == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse to the end of the list and append the new node */
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
