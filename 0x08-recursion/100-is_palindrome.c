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
/**
 * recursive_is_palindrome - recursive for
 * palindrome function
 * @string: string to be checked
 * @s: starting of string
 * @e: end of string
 *
 * Return: returns 1 if string is palindrome or 0
 * otherwise
 */
int recursive_is_palindrome(char *string, int s, int e)
{
	if (s >= e)
		return (1);

	if (string[s] != string[e])
		return (0);

	return (recursive_is_palindrome(string, s + 1, e - 1));
}
