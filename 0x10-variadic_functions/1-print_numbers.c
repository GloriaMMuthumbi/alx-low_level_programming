#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string between numbers
 * @n: number of integers to be printed
 * @...: spread operator for integer parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}

	va_end(args);

	printf("\n");
}
