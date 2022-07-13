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

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
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
