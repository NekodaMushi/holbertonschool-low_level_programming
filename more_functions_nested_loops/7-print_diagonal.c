#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Var to be used
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)

	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{

				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
