#include "lists.h"

/**
 * print_dlistint - fct that prints nb of elements from list
 * @h: list address
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
