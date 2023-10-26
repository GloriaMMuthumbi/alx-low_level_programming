#include "main.h"
/**
 * binary_to_uint - converts a binary value to an unsigned int
 * @b: pointer to string of 0s and 1s (binary value)
 * Return: returns the converted number. otherwise 0 if
 * fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		res = (res << 1) | (*b - '0');
		b++;
	}

	return (res);
}
