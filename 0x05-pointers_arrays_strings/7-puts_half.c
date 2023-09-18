#include "main.h"
/**
 * puts_half - it prints the second half of
 * a string followed by a new line if length of
 * string is odd, the function prints n characters
 * of string where n is(length_of_the_string - 1) / 2
 * @str: the string to be used
 *
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
