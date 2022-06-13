#include "main.h"
#include <stdio.h>

/**
 * print_rev- returns the length of a string.
 * @s: var to be used
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	--i;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
