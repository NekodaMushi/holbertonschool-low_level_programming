#include <stdlib.h>
#include <stdio.h>

/**
 * * main - Most important part of the code
 *
 *  Return: 0 if succeed right
 */
int main(void)
{
	int d;
	int u;
	int h;

	for (h = 48; h < 57; h++)
	{
		for (d = h + 1; d < 57; d++)
		{
			for (u = d + 1; u <= 57; u++)
			{
				putchar(h);
				putchar(d);
				putchar(u);

				if (h == 55 && d == 56 && u == 57)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
