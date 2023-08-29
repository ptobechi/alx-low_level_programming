#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head of list
 *
 * Return: Always 0 (Success)
 */
int pop_listint(listint_t **head)
{
	listint_t *node_ptr;
	int node_data = 0;

	while (*head != NULL)
	{
		node_ptr = *head;
		node_data = node_ptr->n;
		*head = (*head)->next;
		free(node_ptr);
	}
	return (node_data);
}


