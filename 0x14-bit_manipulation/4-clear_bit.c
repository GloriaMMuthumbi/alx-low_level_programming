#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number to be manipulated
 * @index: index of value to be changed
 * Return: returns 1 if successful. otherwise 0 if error
 * occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
