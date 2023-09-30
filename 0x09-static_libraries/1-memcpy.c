#include "main.h"
/**
 * _memcpy - copies n characters from source string
 * to destination string
 * @src: source string
 * @dest: destination string
 * @n: number of characters to be copied
 *
 * Return: returns the resulting string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (original_dest);
}
