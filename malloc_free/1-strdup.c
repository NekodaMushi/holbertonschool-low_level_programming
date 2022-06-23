#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: char of array
 * Return: str
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * (_strlen(str) + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < _strlen(str))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
#include "main.h"
#include <stdio.h>

/**
 *  _strlen - returns the length of a string.
 * @s: var to be used
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
