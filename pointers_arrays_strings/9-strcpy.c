#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 *
 * @dest: first var
 * @src: var to be used
 *
 * Return: dest if succeeded
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
