#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Most important part of the code
 *
 * Return: 0 if succeeded
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
