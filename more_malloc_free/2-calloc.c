#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *str_concat - concatenates two strings
 *@nmemb: first var
 *@size: second var
 *Return: target
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *target;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	target = malloc(nmemb * size);
	if (target == NULL)
	{
		free(target);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		target[i] = 0;

	return (target);
}
