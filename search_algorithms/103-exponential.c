#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: start of array
 * @end: end of array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	if (!array)
		return;
	printf("Searching in array:");
	for (i = start; i < end; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[i]);
}

/**
 * _binary_search - function that searches for a value in an array
 *
 * @array: pointer to first element of the array
 * @start: start of array
 * @end: end of array
 * @value: value to search for
 *
 * Return: 0 if succeed or -1 if fails
 */
int _binary_search(int *array, size_t start, size_t end, int value)
{
	int mid;

	if (start > end)
		return (-1);
	print_array(array, start, end);
	mid = (start + end) / 2;
	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (_binary_search(array, start, mid - 1, value));
	return (_binary_search(array, mid + 1, end, value));
}

/**
 * exponential_search - Search a value using the exponential search
 *
 * @array: The array to search in
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: The index of the founded value, -1 if any issues
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t exp = 1;
	size_t high;

	if (!array)
		return (-1);

	while (exp < size && array[exp] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}

	exp /= 2;

	high = exp * 2 < size - 1 ? exp * 2 : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", exp, high);

	return (_binary_search(array, exp, high, value));
}
