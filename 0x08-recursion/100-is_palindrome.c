#include "main.h"
#include <string.h>

int recursive_is_palindrome(char *string, int s, int e);

/**
 * is_palindrome - checks if string is a
 * palindrome
 * @s: string to be checked
 *
 * Return: returns 1 if s a palindrome or
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	if (length <= 1)
		return (1);

	return (recursive_is_palindrome(s, 0, length - 1));
}

int recursive_is_palindrome(char *string, int s, int e)
{
	if (s >= e)
		return (1);

	if (string[s] != string[e])
		return (0);

	return (recursive_is_palindrome(string, s + 1, e - 1));
}
