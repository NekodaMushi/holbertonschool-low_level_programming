#include "lists.h"

/**
 * get_nodeint_at_index - that returns the nth node from a list
 * @head: head of the list
 * @index: referencial
 * Return: 0 if succeed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head;

	if (head == NULL)
		return (NULL);

	while (count != index && node != NULL)
	{
		node = node->next;
		count++;
	}
	return (node);
}
