#include "main.h"
/**
 * _strncat - it concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate
 * @n: the number of characters to be concatenated
 * from src to dest
 *
 * Return: returns the pointer to the resulting
 * string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_address = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_address);
}
