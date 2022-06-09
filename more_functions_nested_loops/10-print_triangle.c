#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Var to be used
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;
	int k;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			{
				for (k = 1; k <= (size - i); k++)
				{
					_putchar(' ');
				}
				for (j = 1; j <= i; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	else
		_putchar('\n');
}
