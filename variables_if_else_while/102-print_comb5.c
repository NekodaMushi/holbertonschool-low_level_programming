#include <stdlib.h>
#include <stdio.h>

/**
 * * main - Most important part of the code
 *
 *  Return: 0 if succeed right
 */
int main(void)
{
	int a;
	int b;
	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
