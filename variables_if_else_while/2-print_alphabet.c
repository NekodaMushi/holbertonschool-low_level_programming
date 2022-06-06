#include <stdio.h>
#include <stdlib.h>

/**
 * main - Most important part of the code
 *
 * Return: 0 if succeeded
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
