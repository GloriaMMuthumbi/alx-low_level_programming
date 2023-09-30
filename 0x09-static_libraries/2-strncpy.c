#include "main.h"
/**
 * * _strncpy - copies n characters from src
 * to dest
 * @dest: the string to be copied to
 * @src: the string to be copied from
 * @n: number of characters to be copied
 *
 * Return: returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
