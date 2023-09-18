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
	int i;
	
	while (*s[i] != '\0')
	{
		_putchar(*s[i]);
		i--;
	}
	_putchar('\n');
}
