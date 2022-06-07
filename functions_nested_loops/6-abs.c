#include "main.h"
/**
 * _abs - initial fct
 * @a: ASCII variable used by fct
 * Return: 0 if succeeded
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	return (a);
}
