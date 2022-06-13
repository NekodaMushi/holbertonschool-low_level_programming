#include "main.h"
#include <stdio.h>

/**
 *  _puts - returns the length of a string.
 * @str: var to be used
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
