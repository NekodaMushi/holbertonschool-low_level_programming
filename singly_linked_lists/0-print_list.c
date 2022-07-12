#include "lists.h"

/**
 * print_list - fct that prints elements of list
 * @h: list address
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	unsigned int nb_of_node = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nb_of_node++;
		h = h->next;
	}
	return (nb_of_node);
}
