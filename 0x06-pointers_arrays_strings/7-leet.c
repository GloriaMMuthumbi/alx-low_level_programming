#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: returns the encoded string
 */
char *leet(char *str)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	stringCount = 0;
	while (str[stringCount] != '\0')

	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == str[stringCount])
			{
				str[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (str);
}
