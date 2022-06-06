#include <stdlib.h>
#include <stdio.h>

/**
 * * main - Most important part of the code
 *
 *  Return: 0 if succeeded right
 */
int main(void)
{
	int d;
	int u;

	for (d = 48; d <= 57; d++)
	{
		for (u = 48; u <= 57; u++)
		{
			putchar(d);
			putchar(u);
			if (d == 57 && u == 57)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
