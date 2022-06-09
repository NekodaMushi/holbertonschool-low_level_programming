
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 always
 */

int main(void)
{
	unsigned long int t1 = 0, t2 = 1, nexTerm = 1, e = 0;
	int n = 1;

	while (n <= 100)
	{
		t2 = t1;
		t1 = nexTerm;
		nexTerm = t1 + t2;
		if (e < 4000000 && nexTerm % 2 == 0)
			e = e + nexTerm;

		n++;
	}
	printf("%lu\n", e);
	return (0);
}
