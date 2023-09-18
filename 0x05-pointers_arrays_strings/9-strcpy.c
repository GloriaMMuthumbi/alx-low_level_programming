#include "main.h"
#include <stddef.h>
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
	char = *og_dest;
	
	if (dest == NULL || src == NULL)
		return NULL;

	*og_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return og_dest;
}
