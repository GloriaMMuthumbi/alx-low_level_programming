#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: returns the pointer the newly created array.
 * if min > max, return NULL. if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
