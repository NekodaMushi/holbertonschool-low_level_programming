#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - returns the length of a string.
 * @s: var to be used
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len, tmp;
	int left = 0;

	len = strlen(s) - 1;

	while (len > left)
	{
		tmp = s[left];
		s[left] = s[len];
		s[len] = tmp;
		left++;
		len--;
	}
}

/**
 *  _strlen - returns the length of a string.
 * @s: var to be used
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
