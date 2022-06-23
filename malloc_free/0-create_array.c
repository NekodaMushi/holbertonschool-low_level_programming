#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: char of array
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(sizeof(char) * size);

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
