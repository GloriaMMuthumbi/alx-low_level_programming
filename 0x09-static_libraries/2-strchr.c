#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches for a character in string and
 * returns pointer to first occurence
 * @c: character to be found
 * @s: string to be searched in
 *
 * Return: returns pointer of first occurence
 * and NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
