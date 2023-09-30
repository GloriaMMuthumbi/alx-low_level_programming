#include "main.h"
/**
 * _islower - checks if integer represents a
 * lowercase letter in ASCII range
 * @c: the integer being checked
 *
 * Return: returns 1 if in is a lowercase and 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
