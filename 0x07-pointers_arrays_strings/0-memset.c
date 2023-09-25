#include "main.h"
#include <stddef.h>
/**
 * memset - the function fills memory with a constant byte.
 * it first fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: the starting address to be filled
 * @b: the value to be filled
 * @n: number of bytes in memory
 *
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (s == NULL || n == 0)
	{
		return (s);
	}

	char *pointer = s;
	while (n > 0)
	{
		*pointer = b;
		pointer++;
		n--;
	}

	return (s);
}
