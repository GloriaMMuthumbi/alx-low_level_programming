#include "main.h"
/**
 * print_diagsums - prints the sum of the
 * two diagonals of asquare matrix of integers
 * @a: pointer of the matrix
 * @size: size of the array
 *
 * Return: returns nothing
 */
void print_diagsums(int *a, int size)
{
	int sumfirst = 0;
	int sumsecond = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sumfirst += *(a + i * size + i);
		sumsecond += *(a + i * size + (size - 1 - i));
	}

	printf("%i, %i\n", sumfirst, sumsecond);
}
