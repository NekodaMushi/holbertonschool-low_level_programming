#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid -  return pointer to 2 dimensional array of integers
 *@width: int size width
 *@height: int size height
 *Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (height == 0 || width == 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
		}
	}
	return (grid);
}
