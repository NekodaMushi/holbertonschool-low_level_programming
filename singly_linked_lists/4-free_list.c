#include "lists.h"
/**
 * free_list - fct that frees a list_t
 * @head: start of linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
