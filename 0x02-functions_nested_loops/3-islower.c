#include "main.h"
/**
 * _islower - this checks whether the character is
 * lowercase or not and prints 1 if it is and 0 if
 * otherwise.
 *
 * @c: this is the character to be checked
 *
 * Return: puts 1 if c is lowercase and 0 if otherwise
 */

int _islower(char c)
{
	return(c >= 'a' && c <= 'z');
}
