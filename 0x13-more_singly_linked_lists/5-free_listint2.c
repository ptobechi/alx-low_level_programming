#include "lists.h"

/**
 * free_listint2 - free memory space
 * @head: list head pointer
 *
 * Return: Always null (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *node_ptr;

	while (*head != NULL)
	{
		node_ptr = *head;
		*head = (*head)->next;
		free(node_ptr);
	}
}
