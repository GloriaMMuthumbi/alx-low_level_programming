#include "main.h"
/**
 * factorial - returns the factorial of a given
 * number
 * @n: number to be factorise
 *
 * Return: returns -1 when n is less than 0 and
 * 1 if n is 0 and the factorial of n otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
