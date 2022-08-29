#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	printf("Searching in array:");
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

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

/**
 * exponential_search -  searches for a value in a sorted array
 *
 * @array: The array to search in
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: The index of the founded value, -1 if any issues
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t expo = 1;
	size_t high;

	if (array == NULL)
		return (-1);

	while (expo < size && array[expo] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", expo, array[expo]);
		expo *= 2;
	}

	expo /= 2;

	high = expo * 2 < size - 1 ? expo * 2 : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", expo, high);

	return (binary_search(array, size, value));
}
