#include "main.h"
/**
 * main - Most important part of the code
 *
 * Return: 0 if succeeded
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
