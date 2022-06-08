#include "main.h"
#include <stdio.h>
/**
 *  print_to_98- printing numb to go to 98
 *	@n: number to be printed
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
