#include "main.h"
/**
 * _strncat - concatenates a number of characters
 * from dest and src and returns the result
 * @dest: the destination string
 * @src: the tring to be appended
 * @n: number of characters from src to be appended
 *
 * Return: returns the result of concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (original_dest);
}
