#include "main.h"
/**
 * _strcpy - copies the string including the
 * terminating null byte to the buffer
 * @dest: pointer for destination
 * @src: pointer to source
 *
 * Return: the pointer for the destination
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return NULL;

	char *og_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return og_dest;
}
