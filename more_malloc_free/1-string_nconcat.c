#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * malloc_checked - fct that returns pointer to newly allocated space
 * @b: size of memory allocated
 * Return: Nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	dest = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		dest[i] = s1[i];
	if (n >= strlen(s2))
		n = strlen(s2);
	for (j = 0; j < n; j++)
	{
		dest[i] = s2[j];
		i++;
	}
	return (dest);
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
