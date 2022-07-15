#include "lists.h"

/**
 * insert_nodeint_at_index - fct that erase node from start of list
 * @head: head of the list
 * @idx: referencial
 * @n: data inside node
 * Return: 0 if succeed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp;

	unsigned int count;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	tmp = *head;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (count = 0; tmp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
