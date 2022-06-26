#include "main.h"
#include <stdlib.h>

/**
 *free_grid -  function that frees a 2 dimensional grid
 *@grid: array to be freed
 *@height: int size height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
