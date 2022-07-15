#include "lists.h"

/**
 * add_nodeint_end - fct that prints nb of elements from list
 * @head: head of the list
 * @n: data of string
 * Return: number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *old_list;

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
		return (NULL);

	new_list->n = n;

	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	old_list = *head;

	while (old_list->next != NULL)
	{
		old_list = old_list->next;
	}
	old_list->next = new_list;
	return (new_list);
}
