#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings seperated by a seperator
 * followed by a new line
 * @seprator: string to seperate the strings
 * @n: number of strings to the function
 * @...: array of string arguments
 *
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}

	va_end(args);

	printf("\n");
}
