#include "main.h"
/**
 * _strcat - concatenates dest and src
 * and returns the result
 * @dest: the destination string
 * @src: the tring to be appended
 *
 * Return: returns the result of concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}
