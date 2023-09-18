#include "main.h"
/**
 * swap_int - it swaps the values of two integers
 * @*a: int being swapped
 * @*b: int being swapped
 *
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
