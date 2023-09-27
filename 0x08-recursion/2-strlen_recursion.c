#include "main.h"
/**
 * _strlen_recursion - it returns the legnth of a string
 * @s: the string to get the lenght
 *
 * Return: returns the length
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
