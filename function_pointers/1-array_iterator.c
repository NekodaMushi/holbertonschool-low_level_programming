#include "function_pointers.h"

/**
 * array_iterator - function that prints a name
 * @array: array used
 * @size: array's size
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
