#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - returns the length of a string.
 * @str: var to be used
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
