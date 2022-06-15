#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: var to be used
 * @src: var to be used
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{

	int j, i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
