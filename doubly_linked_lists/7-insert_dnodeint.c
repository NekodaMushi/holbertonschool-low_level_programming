#include "lists.h"

/**
 * insert_dnodeint_at_index - fct that insert node at given index
 * @h: head of the list
 * @idx: referencial
 * @n: data inside node
 * Return: new node if succeed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (!new || !(*h))
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	tmp = (*h);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (count = 0; tmp && count < idx; count++)
	{
		if (count == (idx - 1))
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			tmp = tmp->next->next;
			new->prev = tmp->prev;
			tmp->prev = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
