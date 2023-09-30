#include "main.h"
/**
 * _puts - loops through string and prints each
 * character of string. followed by a new line
 * @s: string to be used
 *
 * Return: returns nothing
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
