#include "lists.h"

/**
 * get_dnodeint_at_index - that returns the nth node from a list
 * @head: head of the list
 * @index: referencial
 * Return: 0 if succeed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	node = head;

	while (count != index && node != NULL)
	{
		node = node->next;
		count++;
	}
	return (node);
}
