#include "lists.h"

/**
 * list_len - fct that prints nb of elements of list
 * @h: list address
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int nb_of_node = 0;

	while (h != NULL)
	{
		nb_of_node++;
		h = h->next;
	}
	return (nb_of_node);
}
