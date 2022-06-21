#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: string used in recursion
 *
 * Return: fct
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
