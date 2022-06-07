#include "main.h"
/**
 * print_alphabet_x10 - fct is printing alphabet 10x using _putchar
 *
 * Return: 0 if succeeded
 */
void print_alphabet_x10(void)
{
	char ch, a;

	for (a = 0; a <= 9; a++)
	{
		for (ch = 'a'; ch < 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
