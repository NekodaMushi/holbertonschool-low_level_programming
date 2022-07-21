#include "lists.h"

/**
 * add_dnodeint - fct that add a node at beginning.
 * @head: double pointer pointing on node head
 * @n: data inside node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t *(*head), const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if ((*head) == NULL)
		(*head) = new;
	else
	{

		new->next = (*head);

		(*head)->prev = new;
		(*head) = new;
	}

	return ((*head));
}
