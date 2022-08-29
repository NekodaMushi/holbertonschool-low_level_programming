#include "search_algos.h"

/**
 * seach_jump - function that searches for a value in an array
 *
 * @array: pointer to first element of the array
 * @size: nb of elements in array
 * @value: value to search for
 *
 * Return: 0 if succeed or -1 if fails
 */
int search_jump(int *array, size_t size, int value,
				size_t min, size_t max)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = min; i < size && i <= max; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

/**
 * jump_search - function that searches for a value in an array
 *
 * @array: pointer to first element of the array
 * @size: nb of elements in array
 * @value: value to search for
 *
 * Return: 0 if succeed or -1 if fails
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, jump;

	if (!array)
		return (-1);

	low = 0;
	jump = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	while (jump < size && array[jump] < value)
	{
		low = jump;
		jump += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, jump);
	return (search_jump(array, size, value, low, jump));
}
