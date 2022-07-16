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
	{ /*if there is no data pointed on node*/
		/*else print length of data and data of each node*/
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		/*for every node increment the count of node*/
		nb_of_node++;
		/*go to the next node*/
		h = h->next;
	}
	return (nb_of_node);
}
