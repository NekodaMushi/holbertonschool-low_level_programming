#include "lists.h"

/**
 * print_listint - fct that prints elements of list
 * @h: list address
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int number_of_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_node++;
		h = h->next;
	}
	return (number_of_node);
}
