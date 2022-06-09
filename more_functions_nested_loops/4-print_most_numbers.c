#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
		if ((ch != 50) && (ch != 52))
			_putchar(ch);
	_putchar('\n');
}
