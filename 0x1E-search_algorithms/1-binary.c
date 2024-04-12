#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array of integers
 * using binary search algorithm
 * @array: pointer to the first element in array
 * @size: number of elements in array
 * @value: value to be searched for
 *
 * Return: returns index where value is located. -1 if array is NULL
 * or if value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
