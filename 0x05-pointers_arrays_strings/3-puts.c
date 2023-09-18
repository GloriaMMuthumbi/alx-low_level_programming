#include "main.h"
/**
 * _puts - it prints a string followe by a
 * a new line to stdout
 * @str: the string to be printed
 *
 * Return: returns nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
