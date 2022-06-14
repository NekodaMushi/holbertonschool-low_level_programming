#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: var to be used
 * @src: var to be used
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (start);
}
