#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches for character are returns
 * pointer of first occurence
 * @s: string to be searched
 * @accept: set of characters to be found
 *
 * Return: returns pointer of first occurence
 * found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}
