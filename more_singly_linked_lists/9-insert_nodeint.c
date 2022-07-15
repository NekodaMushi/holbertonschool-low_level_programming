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
	listint_t *tmp, *tmp1;

	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	tmp = *head;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (count != (idx - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		count++;
		if (tmp == NULL)
		{
			free(node);
			return (NULL);
		}
	}

	tmp1 = tmp->next;
	tmp->next = node;
	node->next = tmp1;
	node->n = n;

	return (node);
}
