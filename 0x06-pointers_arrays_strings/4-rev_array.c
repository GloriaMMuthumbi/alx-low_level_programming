#include "main.h"
/**
 * reverse_array - reverses the content
 * of an array of integers.
 * @a: the array to be reversed
 * @n: number of elements in the array
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int l = 0;
	int r = n - 1;
	int temp;

	while (l < r)
	{
		temp = a[l];
		a[l] = a[r];
		a[r] = temp;

		r--;
		l++;
	}
}
