#include "main.h"
#include <stdlib.h>
/**
 * free_2d - frees a 2d array
 * @grid: multidimensional array
 * @height: height of array
 *
 * Return: returns nothing
 */
void free_2d(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: returns a point to an array of strings.
 * returns NULL if strl == NULL or "". returns NULL
 * if fails.
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					free_2d(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			aout[i][j] = str[a1];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
