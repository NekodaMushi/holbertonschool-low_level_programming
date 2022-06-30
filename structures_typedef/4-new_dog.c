#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - function that print dog informations
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	char *ncopy, *ocopy;

	dog_t *doge;

	ncopy = _strdup(name);
	*ncopy = *name;
	ocopy = _strdup(owner);
	*ocopy = *owner;

	doge = malloc(sizeof(dog_t));

	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = name;
	doge->age = age;
	doge->owner = owner;

	return (doge);
}

/**
 * _strdup - fct that returns pointer to newly allocated space
 * @str: size of array
 * Return: ptr
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
