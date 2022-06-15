#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: var to be used
 * @src: var to be used
 * @n: lengh of src
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
		break;
	return (s1[i] - s2[i]);
}
