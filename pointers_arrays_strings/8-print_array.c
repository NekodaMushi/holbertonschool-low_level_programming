#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @str: string cut in half
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
		i++;
	}
	printf("\n");
}
