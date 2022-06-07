#include "main.h"
/**
 * jack_bauer- fct is printing alphabet using _putchar
 *
 * Return: 0 if succeeded
 */
void jack_bauer(void)
{
	int a = 0, b = 0;

	while (a < 24)
	{
		while (b < 60)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}
	/**
	 *  Pk b = 0 et pas b = 48
	 */
}
