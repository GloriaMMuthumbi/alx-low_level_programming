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
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
		i++;
	}
	return (string);
}
