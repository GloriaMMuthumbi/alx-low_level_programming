#include "main.h"
/**
 * _memcpy - function that copies memory area. it copies
 * n bytes from memory area src to memory area dest.
 * @dest: pointer to memory location where copied data will
 * be stored
 * @src: pointer from where the data is to be copied
 * @n: number of bytes to be copied
 *
 * Return: returns a pointer of src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pointer = dest;
	const char *source = src;

	while (n > 0)
	{
		*pointer++ = *source++;
		n--;
	}

	return (dest);
}
