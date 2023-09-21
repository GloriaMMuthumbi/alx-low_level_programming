#include "main.h"
/**
 * _strncpy - it concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate
 * @n: the number of characters to be concatenated
 * from src to dest
 *
 * Return: returns the pointer to the resulting
 * string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_address = dest;

	while (*src != '\0' && n > 0)
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

	return (dest_address);
}
