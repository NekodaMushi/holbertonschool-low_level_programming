#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int n;

int main(void)

	srand(time(NULL));
n = rand()
{
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
