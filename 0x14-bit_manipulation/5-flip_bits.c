#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number to be flipped
 * @m: number to be changed to
 * Return: returns number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count = 0;

	res = n ^ m;
	while (res > 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
