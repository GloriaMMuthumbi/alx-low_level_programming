#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array
 * of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: returns pointer of array on success.
 * if failure, return NULL, if width/height is
 * 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **resgrid;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	resgrid = malloc(height * sizeof(int *));

	if (resgrid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		resgrid[i] = malloc(width * sizeof(int));

		if (resgrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(resgrid[j]);

			free(resgrid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			resgrid[i][j] = 0;

	return (resgrid);
}
