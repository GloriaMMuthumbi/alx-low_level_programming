#include "main.h"
#include <stddef.h>
/**
 * rev_string - it reverses a string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = length - 1;
	char temp;
	int i;

	if (s == NULL)
		return;

	while (s[length] != '\0')
		length++;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}

	for (i = 0; i < length; i++)
		_putchar(s[i]);

	_putchar('\n');
}
