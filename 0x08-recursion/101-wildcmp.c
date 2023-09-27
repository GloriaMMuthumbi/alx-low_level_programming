#include "main.h"
/**
 * wildcmp - compares two string
 * @s1: string to be compared
 * @s2: string to be compared to
 *
 * Return: return 1 if they are considered
 * identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
		{
			return (1);
		}

		return (0);
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
