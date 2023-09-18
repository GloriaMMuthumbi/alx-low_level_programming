#include "main.h"
/**
 * _strlen - it returns the length of a string
 * @s: the string to be checked
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
