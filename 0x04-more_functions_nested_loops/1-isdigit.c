#include "main.h"
/*
 * _isdigit - checks if the input is a digit
 * @c: the integer being checked
 *
 * Return: returns 1 if c is a digit and 0
 * otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
