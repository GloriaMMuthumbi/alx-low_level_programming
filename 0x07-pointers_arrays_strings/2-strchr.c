#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: the string to be check occurrence of c
 * @c: the character to be located
 *
 * Return: returns the pointer of first occurence
 * c in the string otherwise NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
