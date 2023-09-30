#include "main.h"
/**
 * _memset - sets the first ncharacters of string
 * to value b
 * @s: string to be changed
 * @b: value to replace set characters
 * @n: number of characters to be changed
 *
 * Return: returns the resulting string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (original_s);
}
