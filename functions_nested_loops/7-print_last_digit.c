#include "main.h"
/**
 * print_last_digit - initial fct
 * @a: ASCII variable used by fct
 * Return: 0 if succeeded
 */

int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + 48);
	return (last);
}
