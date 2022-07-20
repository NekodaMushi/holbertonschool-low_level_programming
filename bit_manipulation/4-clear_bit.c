#include "main.h"

/**
 * clear_bit - Convert binary to unsigned int
 * @n: binary number
 * @index: Position of bit
 * Return: Value of bit at index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 32)
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
