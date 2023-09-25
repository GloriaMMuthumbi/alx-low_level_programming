#include "main.h"
/**
 * set_string - sets the value of a pointer
 * to a char
 * @s: the pointer to be changed
 * @to: the pointer to change to
 *
 * Return: returns nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
