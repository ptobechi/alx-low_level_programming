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

	if (listint_t == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	return (new_node);
}
