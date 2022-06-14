#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: first var
 * @n : var to be used
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
