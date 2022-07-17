#include "lists.h"

/**
 *print_listint_saf - fct that print safely
 *@head: head of the list
 *Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number_of_node = 0;
	const listint_t *tmp;

	tmp = head;

	while (head != NULL && loop_checker(tmp, head, number_of_node))
	{
		printf("[%p] %d\n", (void *)head, head->n);
		number_of_node++;
		head = head->next;
	}
	if (head != NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (number_of_node);
}

int loop_checker(const listint_t *head, const listint_t *current_node, size_t index)
{
	size_t counter = 0;

	while (head != current_node)
	{
		head = head->next;
		counter++;
	}
	if (counter == index)
		return (1);

	return (0);
}
