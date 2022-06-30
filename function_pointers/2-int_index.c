#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: array used
 * @size: array's size
 * @cmp: pointer to function
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j != 0)
				return (i);
		}
	}
	return (-1);
}
