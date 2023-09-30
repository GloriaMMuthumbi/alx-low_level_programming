#include "main.h"
/**
 * _isalpha - checks if the integer represents an alphabetic
 * character in ASCII range.
 * @c: the int being checked
 *
 * Return: returns 1 if integer represents a character
 * and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
