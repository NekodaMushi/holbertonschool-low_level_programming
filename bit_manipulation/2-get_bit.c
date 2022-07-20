#include "main.h"

/**
 * get_bit - Convert binary to unsigned int
 * @n: binary number
 * @index: Position of bit
 * Return: Value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 30)
		return (-1);
	return ((n >> index) & 1);
}
