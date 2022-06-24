#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;
	int s1_lengh = strlen(s1);
	int s2_lengh = strlen(s2);
	int size = (s1_lengh + s2_lengh + 1);

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_lengh; i++)
		s[i] = s1[i];
	for (j = 0; j < s2_lengh; i++, j++)
		s[i] = s2[j];

	s[size - 1] = '\0';

	return (s);
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
