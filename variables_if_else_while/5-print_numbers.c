#include <stdio.h>
#include <stdlib.h>

/**
 * main - Most important part of the code
 *
 * Return: 0 if succeeded
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
