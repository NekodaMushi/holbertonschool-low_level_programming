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
