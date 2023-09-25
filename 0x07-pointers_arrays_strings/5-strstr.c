#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring. treminating null
 * bytes are not compared
 * @haystack: the string to be searched through
 * @needle: substring to be located
 *
 * Return: returns a pointer to the beginning of
 * the located substring otherwise NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *starting = haystack;
		char *substring = needle;
	
		while (*haystack && *substring && *haystack == *substring)
		{
			haystack++;
			substring++;
		}

		if (!*substring)
			return (starting);

	haystack = starting + 1;

	}

	return (NULL);
}
