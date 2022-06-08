#include "main.h"
/**
 * print_times_table - fct is printing multiplication table
 *
 * Return: 0 if succeeded
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int m = 0;

	if (n > 0 && n < 15)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				m = i * j;
				if (m > 99)
					_putchar((m / 100) + '0');
				else if (j != 0)
					_putchar(' ');

				if (m > 9)
					_putchar(((m / 10) % 10) + '0');
				else if (j != 0)
					_putchar(' ');

				_putchar(m % 10 + '0');

				if (j != n)
					_putchar(','), _putchar(' ');

				j++;
			}

			j = 0;
			_putchar('\n');
			i++;
		}
	}
}
