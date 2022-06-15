#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that concatenates two strings.
 * @dest: var to be used
 * @src: var to be used
 * @n: lengh of src
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
