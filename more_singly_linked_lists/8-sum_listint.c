#include "lists.h"

/**
 * pop_listint - fct that erase node from start of list
 * @head: head of the list
 * Return: 0 if succeed
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	unsigned int sum = 0;
	unsigned int get_value = 0;
	node = head;

	if (head == NULL)
		return (0);

	while (node != NULL)
	{
		get_value = node->n;
		sum += get_value;
		node = node->next;
	}
	return (sum);
}
