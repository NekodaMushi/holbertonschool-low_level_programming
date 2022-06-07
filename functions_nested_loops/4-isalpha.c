#include "main.h"
/**
 * _isalpha - initial fct
 * @c: ASCII variable used by fct
 * Return: 0 if succeeded
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 65 && c < 90))
		return (1);

	return (0);
}
