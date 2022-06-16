#include "main.h"
#include <stdio.h>

/**
 * _atoi - fct that convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: the number converted
 */

int _atoi(char *s)
{
	int i, j = 1;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && ((s[i] < 48 || s[i] > 57)); i++)
	{
		if (s[i] == '-')
			j *= -1;
	}

	for (; s[i] > 47 && s[i] < 58; i++)
	{
		result = result * 10 + (s[i] - '0');
	}

	result *= j;

	return (result);
}
