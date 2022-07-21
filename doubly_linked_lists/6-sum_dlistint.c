#include "lists.h"

/**
 * sum_dlistint - returns sum from all nodes in a list
 * @head: head of the list
 * Return: 0 if succeed
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *check;
	int get_data = 0;
	unsigned int sum = 0;

	check = head;

	if (head == NULL)
		return (0);

	while (check != NULL)
	{
		get_data = check->n;
		sum += get_data;
		check = check->next;
	}
	return (sum);
}
