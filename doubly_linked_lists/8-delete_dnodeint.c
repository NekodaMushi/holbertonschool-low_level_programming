#include "lists.h"

/**
 * delete_dnodeint_at_index - fct that delete a node at given index
 * @head: head of the list
 * @index: referencial
 * Return: 1 if succeed and -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *node;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
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
	tmp = tmp->next;
	if (tmp)
		tmp->prev = node->prev;

	free(node);

	return (1);
}
