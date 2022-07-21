#include "lists.h"

/**
 * add_dnodeint_end - that adds a new node at the end.
 * @head: double pointer pointing on node head
 * @n: data inside node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *old_last_node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
		(*head) = new;
	else
	{
		old_last_node = (*head);
		while (old_last_node->next != NULL)
		{
			old_last_node = old_last_node->next;
		}
		old_last_node->next = new;
		new->prev = old_last_node;
	}
	return (new);
}
