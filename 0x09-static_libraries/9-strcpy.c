#include "main.h"
/**
 * _strcpy - copies each character from src
 * to dest
 * @dest: the string to be copied to
 * @src: the string to be copied from
 *
 * Return: returns the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
