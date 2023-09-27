#include "main.h"

int recursive_is_prime_number(int n, int d);
/**
 * is_prime_number - checks if input is
 * a prime number
 * @n: the number being checked
 *
 * Return: returns 1 if n is a prime number
 * and 0 otherwise
 */
int is_prime_number(int n)
{
	return (recursive_is_prime_number(n, n / 2));
}

/**
 * recursive_is_prime_number - it's the recursive
 * function of the prime number function
 * @n: number being checked
 * @d: divisor being used to check
 *
 * Return: it returns 1 is n is a prime number or 0
 * otherwise
 */
int recursive_is_prime_number(int n, int d)
{
	if (n <= 1)
		return (0);

	if (d == 1)
		return (1);

	if (n % d == 0)
		return (0);

	return (recursive_is_prime_number(n, d - 1));
}
