#include <stdio.h>

/**
 * main -  fct that prints the first 50 Fibonacci numbers
 *
 * Return: 0 if succeeded
 */

int main(void)
{
	unsigned long long int t1 = 0, t2 = 1, nextTerm = 1;
	int n = 0;

	while (n < 50)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf("%llu", nextTerm);
		n++;
		if (n != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
