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
	/**tmp point to head to save his location*/
	tmp = *head;
	/** data inside head is save into value var*/
	value = (*head)->n;
	/** designing node next to head as new head */
	*head = (*head)->next;
	/*free what was called head seconds ago*/
	free(tmp);

	/** Return the data saved from head*/
	return (value);
}
