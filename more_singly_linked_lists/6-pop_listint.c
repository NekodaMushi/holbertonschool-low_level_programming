#include "lists.h"

/**
 * pop_listint - fct that erase node from start of list
 * @head: head of the list
 * Return: 0 if succeed
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);

	tmp = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (value);
}
