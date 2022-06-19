#include "main.h"
#include <stdio.h>

/**
 * _memset - fct that convert a string to an integer
 *
 * @s: memory area pointed
 * @n: bytes
 * @b: cste area
 * Return: the number converted
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
