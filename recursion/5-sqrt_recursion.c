#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: string used in recursion
 *
 * Return: fct
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root(n, 0));
}

int root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
	{
		return (root(n, i + 1));
	}
}
