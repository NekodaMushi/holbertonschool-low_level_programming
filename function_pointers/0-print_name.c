#include "function_pointers.h"

/**
 * print_name- function that prints a name
 * @name: var to be printed
 * @f: function who print name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
