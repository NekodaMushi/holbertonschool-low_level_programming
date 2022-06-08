#include "main.h"
#include <stdio.h>

/**
 *  _isupper- check for uppercase
 * @c: var to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c < 91)
		return (1);
	else
		return (0);
}
