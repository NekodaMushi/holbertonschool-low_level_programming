#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array
 *
 * @array: pointer to first element of the array
 * @size: nb of elements in array
 * @value: value to search for
 *
 * Return: 0 if succeed or -1 if fails
 */

int _jump_search(int *array, size_t size, int value)
{
	size_t jump, pos, i;

	pos = 0;
	jump = sqrt(size);

	if (!array)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] == value)
			return i;
		if (array[i] < value)
			pos = i;
		else
			break;
	}
	for (i = pos; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
int jump_search(int *array, size_t size, int value)
{
	int idx = _jump_search(array, size, value);

	if (idx == -1)
		return (-1);
	else
		return (idx);
}
