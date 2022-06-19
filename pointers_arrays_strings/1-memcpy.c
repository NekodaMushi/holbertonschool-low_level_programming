#include "main.h"
#include <stdio.h>

/**
 * _memcpy - fct that copies memory area.
 *
 * @dest: memory destination area
 * @src: mem to be copied
 * @n: first byte of mem location
 * Return: the number converted
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
