#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2d array created by alloc_grid
 * @grid: multidimensional array
 * @height: height of grid
 *
 * Return: returns nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height --)
			free(grid[height]);
		
		free(grid);
	}
}
