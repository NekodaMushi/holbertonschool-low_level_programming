#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function thar rev.
 *
 * @a: var to be used
 * @n: var to be used
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++, --n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
	}
}
