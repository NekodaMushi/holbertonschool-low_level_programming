#include "lists.h"

/**
 * free_dlistint - fct that frees a dlistint_t list.
 * @head: double pointer pointing on node head
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
