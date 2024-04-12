#include "search_algos.h"

/**
 * linear_search - searches for value in array of integers
 * using Linear search algorithm
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: returns the first index of the value located, -1 if
 * array is NULL or if value is not present
 */

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	for (index=0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, *array);
		if (*array == value)
			return (index);
		array++;
	}
	return (-1);
}
