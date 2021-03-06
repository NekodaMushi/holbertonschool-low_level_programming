#include "main.h"

/**
 * set_bit - Set bit from 0 to 1 at given index
 * @n: binary number
 * @index: Position of bit
 * Return: Value of bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 32)
	{
		*n |= (1 << index);
		return (1);
	}
	else
		return (-1);
}
