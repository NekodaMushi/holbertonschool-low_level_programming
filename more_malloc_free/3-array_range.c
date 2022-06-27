#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *array_range - concatenates two strings
 *@min: first var
 *@max: second var
 *Return: target
 */
int *array_range(int min, int max)
{
	int *target;
	int i;

	if (min > max)
		return (NULL);

	target = malloc((max - min + 1) * sizeof(int));
	if (target == NULL)
	{
		free(target);
		return (NULL);
	}

	for (i = 0; min <= max; i++)
		target[i] = min++;

	return (target);
}
