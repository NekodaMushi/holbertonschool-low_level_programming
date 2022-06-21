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
		return (_root(n, 0));
}
/**
 * _root - function that returns the natural square _root of a number.
 *
 * @n: string used in recursion
 * @i: var used to check square
 *
 * Return: function
 */
int _root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
	{
		return (_root(n, i + 1));
	}
}
