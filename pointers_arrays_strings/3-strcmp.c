#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings.
 * @s1: var to be used
 * @s2: var to be used
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
		continue;
	return (s1[i] - s2[i]);
}
