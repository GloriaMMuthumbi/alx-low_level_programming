#include "main.h"
/**
 * puts2 - it prints every other character of a string
 * starting with the first character followed by a new
 * line
 * @str: the string to be printed
 *
 * Return: return nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; i < str.length; i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
