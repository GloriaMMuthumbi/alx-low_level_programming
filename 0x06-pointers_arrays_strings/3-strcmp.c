#include "main.h"
/**
 * _strcmp - this function compares to string
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: returns 0 if value is 0,
 * 1 if non-matching first character in s1 has a larger
 * value than the one in s2 and -1 if non-matching
 * first character in s1 has a smaller value
 * than the one in s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			if ((int)(*s1) < (int)(*s2))
				return (-1);
			else if ((int)(*s1) > (int)(*s2))
				return (1);
			else
				return (0);
		}
		s1++;
		s2++;
	}
	return (0);
}
