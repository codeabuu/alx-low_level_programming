#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this frees the 2d array
 * @grid: the 2d grid
 * @height: height dimension of the grid
 * Description: all this will free memory of grid
 *
 */
void free_grid(int **grid, int height)
{
	int z = 0;

	for (; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
