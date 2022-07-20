#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: binary number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
