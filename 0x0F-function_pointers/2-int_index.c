#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * in an array of elements
 * @array: array to be searched in
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare
 * values
 *
 * Return: returns index of the first element for which cmp
 * doesn't return 0. returns -1 if no match found and when size
 * is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
