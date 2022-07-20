#include "lists.h"

/**
 *find_listint_loop - fct that finds the loop in a linked list
 *@head: head of the list
 *Return: true when address if found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = NULL, *slow = NULL;

	if (head == NULL)
		return (FALSE);

	while (fast != NULL && fast != slow)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return (true);
}