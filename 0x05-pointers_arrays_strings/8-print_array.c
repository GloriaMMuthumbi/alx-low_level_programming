#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_array - it prints n elements of an array of integers
 * where the numbers are seperate by a comma followed by a space
 * and in the same order as they are stored followed by a new line
 * @a: the array ebing printed
 * @n: the number of elements in the array
 *
 * Return: returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n -1)
			printf(", ");
	}

	printf("\n");
}
