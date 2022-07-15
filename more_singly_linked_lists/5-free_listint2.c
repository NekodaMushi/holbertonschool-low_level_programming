#include "lists.h"

/**
 * free_listint2 - fct that prints nb of elements from list
 * @head: head of the list
 * Return: number of elements
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)

		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	*head = NULL;
}
