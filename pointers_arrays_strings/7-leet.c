#include "main.h"

/**
 * leet - function that capitalizes all words of a string.
 *
 * @s: string
 *
 * Return: Always string.
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char speMin[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int speMax[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(speMin + j) != '\0'; j++)
		{
			if (*(s + i) == *(speMin + j))
				*(s + i) = *(speMax + j);
		}
	}
	return (s);
}
