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
	int i;
	int j = 0;

	while (str[j] != '\0')
		j++;

	if (j % 2 == 0)
	{
		for (i = j / 2; i <= j; i++)
			_putchar(str[i]);
	}
	else 
	{
		for (i = (j - 1) / 2; i <= j; i++)
			_putchar(str[i]);
	}
}
