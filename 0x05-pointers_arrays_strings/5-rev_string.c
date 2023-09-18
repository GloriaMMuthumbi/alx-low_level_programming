#include "main.h"
/**
 * rev_string - it reverses a string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int l = 0;
	int b = 0;
        int e = l - 1;
        char temp;

	while (s[l] != '\0')
		l++;

	while (b < e)
	{
		temp = s[b];
		s[b] = s[e];
		s[e] = temp;
	}

	b++;
	e--;
}
