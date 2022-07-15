#include "lists.h"

/**
 *delete_nodeint_at_index - fct that deletes the node at index
 *@head: head of the list
 *@index: node's location to erase.
 *Return: 1 if succeed and -1 if not.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (count = 0; tmp && count < index - 1; count++)
	{
		if (!tmp || !tmp->next)
			return (-1);
		tmp = tmp->next;
	}
	node = tmp->next;
	tmp->next = node->next;

	free(node);

	return (1);
}
