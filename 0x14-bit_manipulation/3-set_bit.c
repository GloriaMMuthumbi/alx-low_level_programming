#include "main.h"
/**
 * set_bit - it sets a value of a bit to 1 at index index
 * @n: pointer to the integer
 * @index: index of the value to be set (0-based indexing)
 * Return: returns 1 if success and -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
