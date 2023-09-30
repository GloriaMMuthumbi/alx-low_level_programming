#include "main.h"
/**
 * _strcmp - compares two characters
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: returns 0 if both strings are identical,
 * 1 if charcter in s1 has a larger ASCII value than
 * character in s2 and -1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
