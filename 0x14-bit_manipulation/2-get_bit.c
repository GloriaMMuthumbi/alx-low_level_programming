#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to be searched through
 * @index: index to be checked
 * Return: returns value of the bit at the index. otherwise
 * returns -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
