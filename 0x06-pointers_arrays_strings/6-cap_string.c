#include "main.h"
/**
 * cap_string - it converts all lowercase letters
 * to uppercase
 * @string: the string to be manipulated
 *
 * Return: returns the pointer of the converted string
 */
char *cap_string(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 32;
		i++;
	}
	return (string);
}
