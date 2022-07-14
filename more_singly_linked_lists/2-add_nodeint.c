#include "lists.h"

/**
 * add_nodeint - fct that prints nb of elements from list
 * @head: head of the list
 * @n: data of string
 * Return: number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
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
