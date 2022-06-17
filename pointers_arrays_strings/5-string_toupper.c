#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * Return: Always string.
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '0'; i++)
	{
		if (string[i] > 96 && string[i] < 123)
			string[i] = string[i] - 32;
	}
	return (string);
}
