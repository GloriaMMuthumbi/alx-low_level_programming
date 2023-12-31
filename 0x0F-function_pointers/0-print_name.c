#include <stdio.h>
/**
 * print_name - function prints a name
 * @name: name to be printed
 * @f: pointer to the function
 *
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
