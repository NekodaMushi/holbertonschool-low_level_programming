#include <stdio.h>

/**
 * main - fct printssum of all the multiples
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	int c = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			c = c + i;
	}

	printf("%d\n", c);
	return (0);
}
