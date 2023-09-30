#include "main.h"
#include <stddef.h>
/**
 * _strstr - searches for substring in string
 * @haystack: string to be search in
 * @needle: substring to be found
 *
 * Return: returns pointer to startch of found match
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr && *hay_ptr == *needle_ptr)
		{
			hay_ptr++;
			needle_ptr++;
		}

		if (!*needle_ptr)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
