#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the set of characters that are accepted
 *
 * Return: returns a pointer to the byte in s that
 * matches one of the bytes in the set otherwise NULL
 * if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{

	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);

		}

		s++;
	}

	return (NULL);
}
