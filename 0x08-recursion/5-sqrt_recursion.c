#include "main.h"

int real_sqrt_recursion(int n, int num);
/**
 * _sqrt_recursion - returns the natural square
 * root of a number
 * @n: the number to be squarerooted
 *
 * Return: returns the natural root or -1 if
 * n doesn't have a natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - the recursion of the sqrt
 * function
 * @n: the number being checked
 * @num: the potential squareroot of n
 *
 * Return: returns the sqrt
 */
int real_sqrt_recursion(int n, int num)
{
	if (num * num > n)
		return (-1);

	if (num * num == n)
		return (num);

	return (real_sqrt_recursion(n, num + 1));
}
