#include "main.h"
/**
 * print_alphabet - fct is printing alphabet using _putchar
 *
 * Return: 0 if succeeded
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
