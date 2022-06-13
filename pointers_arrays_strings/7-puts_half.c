#include "main.h"

/**
 * puts_half - a function that prints half of a string with new line
 *
 * @str: string cut in half
 *
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
