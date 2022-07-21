#include "lists.h"

/**
 * dlistint_len - fct that prints list's length.
 * @h: list address
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
