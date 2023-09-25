#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to get the length of prefix substring
 * @accept: string containing the characters to match
 *
 * Return: returns the number of characters in the
 * segment of s which consists only of characters in
 * accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int charfound;
	int i;

	while (*s)
	{
		charfound = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				charfound = 1;
				break;
			}
		}
		if (!charfound)
			break;

		counter++;
		s++;
	}

	return (counter);
}
