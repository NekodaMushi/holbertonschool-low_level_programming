#include "main.h"
/**
 * print_sign - initial fct
 * @n: ASCII variable used by fct
 * Return: 0 if succeeded
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	/**
	 * if (n < 0)
	 * _putchar('-');
	 * return (-1);
	 *
	 * won't work because compilator need to have a
	 * return whatever happens, not by entering a condition
	 * so need to use
	 * else
	 */
}
