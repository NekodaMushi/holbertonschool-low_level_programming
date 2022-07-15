#include "lists.h"

/**
 * free_listint - fct that prints nb of elements from list
 * @head: head of the list
 * Return: number of elements
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
