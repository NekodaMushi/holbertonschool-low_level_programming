#include "lists.h"
/**
 * add_node - fct that adds a new node at the end
 * @head: start of linked list
 * @str: next node
 * Return: number of elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	/*1 allocate node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	/*2 put the data in*/
	new->len = _strlen(str);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	/*3 new node gonna be the last node,
	 so make next to it NULL*/
	new->next = NULL;

	/*4 if linked list empty, make new as head*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/*5 Otherwise cross until last node*/
	while (last->next != NULL)
		last = last->next;

	/*6 Change the next of last node*/
	last->next = new
}
