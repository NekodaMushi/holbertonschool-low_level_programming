#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for uppercase
 * @c: var to be checked
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if ((c > 47) & (c < 58))
		return (1);
	else
		return (0);
}
