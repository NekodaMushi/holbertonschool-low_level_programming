#include "lists.h"

/**
 * free_listint_safe - fct that prints nb of elements from list
 * @h: head of the list
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	unsigned int number_of_node = 0;

	if (!h || !*h)
		return (0);

	delete_loop(*h);

	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		number_of_node++;
	}
	*h = NULL;
	return (number_of_node);
}

/**
 * delete_loop - fct that deletes the node responsable for the loop
 * @head: head of the list
 * Return: Nothing
 **/

void delete_loop(listint_t *head)
{
	listint_t *after = head, *prev = head;
	unsigned int index = 0;

	while (after != NULL)
	{
		after = after->next;
		index++;
		if (loop_checker(head, after, index) == !0)
		{
			prev->next = NULL;
			return;
		}
		prev = prev->next;
	}
}
