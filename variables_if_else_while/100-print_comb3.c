#include <stdlib.h>
#include <stdio.h>

/**
 * * main - Most important part of the code
 *
 *  Return: 0 if succeed right
 */
int main(void)
{
	int decimal;
	int unit;

	for (decimal = 48; decimal <= 57; decimal++)
	{
		for (unit = decimal + 1; unit <= 57; unit++)
		{
			putchar(decimal);
			putchar(unit);
			if (decimal == 56 && unit == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
