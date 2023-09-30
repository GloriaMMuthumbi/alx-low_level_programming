#include "main.h"
#include <unistd.h>
/**
 * _putchar - outputs the character
 * @c: the character to be displayed
 *
 * Return: returns the character c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
