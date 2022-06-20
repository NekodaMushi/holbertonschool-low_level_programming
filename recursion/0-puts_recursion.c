#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: string
 *
 * Return: fct
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
