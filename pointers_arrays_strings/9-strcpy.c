#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: first var
 * @src : var to be used
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
