#include "main.h"
#include <stdio.h>

/**
 *  swap_int - swaps the values of two integers.
 * @a: var to be used*
 * @b: var to be swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
