#include "main.h"
/**
 * _strspn - it calculates lenght of segment consisting
 * of characters in the set
 * @accept: set of characters being looked for
 * @s: string being searched in
 *
 * Return: returns the length of the segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && _strchr(accept, *s))
	{
		count++;
		s++;
	}

	return (count);
}
