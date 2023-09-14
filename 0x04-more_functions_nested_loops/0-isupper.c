#include "main.h"
/**
 * _isupper function checks for uppercase
 * characters in the input.
 *
 * @c: this is the character being checked
 *
 * Return: returns 1 if the c is uppercase and 0
 * is otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A) && (c <= 'Z))
		return (1);
	return(0);
}
