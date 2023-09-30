#include "main.h"
/**
 * _strlen - it returns the length of a string
 * @s: string to be used
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
