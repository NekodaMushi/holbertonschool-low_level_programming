#include "lists.h"

/**
 *print_listint_safe - fct that print safely
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

/**
 *loop_checker - fct that check where the loop is starting
 *@head: head of the list
 *@current: location to check where the loop start
 *@idx: referential used to find the loop
 *Return: 1 when loop found.
 */

int loop_checker(const listint_t *head, const listint_t *current, size_t idx)
{
	size_t counter = 0;

	while (head != current)
	{
		head = head->next;
		counter++;
	}
	if (counter == idx)
		return (1);

	return (0);
}
