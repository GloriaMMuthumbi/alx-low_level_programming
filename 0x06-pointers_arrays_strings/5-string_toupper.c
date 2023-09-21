#include "main.h"
/**
 * string_toupper - converts all lowercase characters
 * in a string into uppercase characters
 * @string: the string to be manipulated
 *
 * Return: returns the pointer lowercase string
 */
char *string_toupper(char *string)
{
	char *pointer = string;
	int i = 0;

	while (*pointer != '\0')
	{
		if (*pointer >= 'a' && *pointer <= 'z')
			string[i] -= 32;

		i++;
	}

	return (string);
}
