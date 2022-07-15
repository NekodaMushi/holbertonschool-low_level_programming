#include "lists.h"

/**
 *reverse_listint - fct that that reverses a linked list
 *@head: head of the list
 *Return: adress of the new first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *after;

	prev = 0;
	after = 0;

	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = after;
	}
	*head = prev;
	return (*head);
}
