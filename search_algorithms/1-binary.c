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

	l = 0;
	h = size - 1;

	if (size == 0)
		return (-1);

	while (l <= h)
	{
		mid = (l + h) / 2;
		printf("Searching in array: ");
		for (tmp = l; tmp < h; tmp++)
		{
			printf("%d, ", array[tmp]);
		}
		printf("%d\n", array[tmp]);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
