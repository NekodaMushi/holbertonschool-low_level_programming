

#include "lists.h"
/**
 * add_node - fct that add node in a list
 * @head: start of linked list
 * @str: next node
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	/*allocate memory to new node*/
	new = malloc(sizeof(list_t));
	/*if new node doesn't exist return rien*/
	if (new == NULL)
		return (NULL);
	/*calcul length of string inside new node*/
	/*copy and paste str date inside new node*/
	/*summury of two last lines: put data in new*/
	new->len = _strlen(str);
	new->str = strdup(str);
	/* ??? */
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/* new node is the head now*/
	new->next = *head;

	*head = new;

	return (*head);
}
/**
 * _strlen - return length of string
 * @str: string checker
 * Return: (length)
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
