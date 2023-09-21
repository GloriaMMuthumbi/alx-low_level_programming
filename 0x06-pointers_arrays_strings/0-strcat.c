#include "main.h"
/*
 * _strcat - it concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate
 *
 * Return: returns the pointer to the resulting
 * string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_address = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest_address;
}
