#include <stdlib.h>
#include <stdio.h>

/**
 * * main - Most important part of the code
 *
 *  Return: 0 if succeeded right
 */
int main(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 9)
		{
			continue;
		}
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
