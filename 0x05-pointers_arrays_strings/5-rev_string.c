#include "main.h"
/**
 * rev_string - it reverses a string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;

	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
