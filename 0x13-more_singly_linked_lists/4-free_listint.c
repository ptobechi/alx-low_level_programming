#include "lists.h"

/**
 * free_listint - free memory space
 * @head: list head
 *
 * Return: Always null (void)
 */
void free_listint(listint_t *head)
{
	listint_t *node_ptr;

	while (*head != NULL)
	{
		node_ptr = head;
		head = head->next;
		free(node_ptr);
	}
}
