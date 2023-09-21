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
	int j;
	char characters[] = " \t\n,;.!?\"(){}";

	while (string[i] != '\0')
	{
		if ( string[0] >= 'a' && string[0] <= 'z')
			string[0] -= 32;

		if (string[i] == ' ' || string[i] == '\t' || string[i] == '.' || string[i] == '\n' || string[i] == ',' || string[i] == '?' || string[i] == '!' || string[i] == '(' || string[i] == ')' || string[i] == '{' || string[i] == '}' || string[i] == '"' || string[i] == ';')
		{
			if (string[i + 1] >= 'a' && string[i + 1] <= 'z')
				string[i + 1] -= 32;
		}
		i++;
	}

	return (string);
}
