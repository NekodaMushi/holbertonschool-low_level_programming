#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array
 *
 * @array: pointer to first element of the array
 * @size: nb of elements in array
 * @value: value to search for
 *
 * Return: 0 if succeed or -1 if fails
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, l, h, tmp;

	l = array[0];
	h = size - 1;
	tmp = l;
	while (l < h)
	{
		printf("Searching in array: ");
		for (; l < h; l++)
		{
			printf("%d,", array[l]);
		}
		printf("%d\n", array[l]);
		l = tmp;
		mid = (l + h) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			h = mid - 1;
		else
			l = mid + 1;
		tmp = l;
	}
	return (-1);
}
