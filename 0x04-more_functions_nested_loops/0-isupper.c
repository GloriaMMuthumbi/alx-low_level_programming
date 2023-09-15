#include "main.h"
/**
 * _isupper - checks if a character is uppercase.
 * @c: The character to check.
 *
 * Return: Always 0
 * */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
