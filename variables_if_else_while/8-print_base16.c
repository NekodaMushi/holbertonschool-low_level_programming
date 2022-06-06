#include <stdio.h>
#include <stdlib.h>

/**
 * main - Most important part of the code
 *
 * Return: 0 if succeeded
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
