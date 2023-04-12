#include "main.h"
#include <stdlib.h>

/**
* free_grid - A function that frees a 2 dimensional grid
* previously created by your alloc_grid function.
* @grid: 2-dimensional array of integers to be freed
* @height: height of grid
* Return:returns void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
