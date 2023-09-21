#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: returns the encoded string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		char c = str[i];
		int is_lower = (c >= 'a' && c <= 'z');
		int is_upper = (c >= 'A' && c <= 'Z');

		if (is_lower || is_upper)
		{
			int is_a_A = (c == 'a' || c == 'A');
			int is_e_E = (c == 'e' || c == 'E');
			int is_o_O = (c == 'o' || c == 'O');
			int is_t_T = (c == 't' || c == 'T');
			int is_l_L = (c == 'l' || c == 'L');

			if (is_a_A)
				str[i] = '4';
			else if (is_e_E)
				str[i] = '3';
			else if (is_o_O)
				str[i] = '0';
			else if (is_t_T)
				str[i] = '7';
			else if (is_l_L)
				str[i] = '1';
		}
		i++;
	}
	return (str);
}
