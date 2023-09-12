#include "main.h"
/**
 * _isalpha - this function checks if alphabetic
 * character is lowercase or uppercase.
 *
 * @c: this is the characracter being checked.
 *
 * Return: returns 1 if it's uppercase or lowecase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
