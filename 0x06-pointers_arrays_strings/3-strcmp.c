#include "main.h"
/**
 * _strcmp - this function compares to string
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: returns 0 if value is 0,
 * 15 if non-matching first character in s1 has a larger
 * value than the one in s2 and -15 if non-matching
 * first character in s1 has a smaller value
 * than the one in s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (diff);
}
