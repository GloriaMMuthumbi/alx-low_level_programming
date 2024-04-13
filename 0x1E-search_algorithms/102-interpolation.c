#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to be searched for
 *
 * Return: returns index where value is located. -1 if array is NULL
 * or if value is not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t index, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		index = left + (
				((double)(right - left) / (
					array[right] - array[left])) * (
					value - array[left]));
		if (index < size)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}
		if (array[index] == value)
			return (index);
		if (array[index] > value )
			right = index - 1;
		else
			left = index + 1;
	}
	return (-1);
}
