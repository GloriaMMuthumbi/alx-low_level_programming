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
	char array[] = " \t\n,;.!?\"(){}";

	while (*(string + i))
	{
		if (*(string + i) >= 'a' && *(string + i) <= 'z')
		{
			if (i == 0)
				*(string + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (array[j] == *(string + i - 1))
						*(string + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (string);
}
