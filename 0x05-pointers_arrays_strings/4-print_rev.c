#include "main.h"
/**
 * print_rev - it prints a string in reverse
 * followed by a new line
 * @s: the string to be printed in reverse
 *
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int l;
	
	while (*s[l] != '\0')
		l++;

	for (int i = l - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
