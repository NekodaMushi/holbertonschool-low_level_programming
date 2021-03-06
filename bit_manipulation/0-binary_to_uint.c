#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: binary number
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int slen = 0;
	int result = 0;
	int decval = 1;
	int i;

	if (b != NULL)
	{
		slen = strlen(b);
		for (i = (slen - 1); i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			if (b[i] == '1')
				result += decval;
			decval *= 2;
		}
	}
	return (result);
}
