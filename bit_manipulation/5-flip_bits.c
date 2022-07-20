#include "main.h"

/**
 * flip_bits - returns the nb of bits you would need to flip
 * @n: binary number
 * @m: Position of bit
 * Return: Value of bit at index
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int t;

	t = n ^ m;

	while (t > 0)
	{
		count += (t & 1);
		t >>= 1;
	}
	return (count);
}
