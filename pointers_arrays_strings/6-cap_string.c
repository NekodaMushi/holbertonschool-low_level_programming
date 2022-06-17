

#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * Return: Always string.
 */
char *cap_string(char *s)
{
	int i, j;
	int spe[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 9)
			s[i] = 32;
		if (s[i] > 96 && s[i] < 123)
		{
			for (j = 0; spe[j] != '\0'; j++)
			{
				if (s[i - 1] == spe[j])
					s[i] -= 32;
			}
		}
	}
	return (s);
}
