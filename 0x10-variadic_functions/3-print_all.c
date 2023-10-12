#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments in function
 * if c - char, f - float, s - char *, c - char
 * @...: array of arguments
 *
 * Return: returns nothing
 */
void print_all(const char * const format, ...)
{
	char *my_str;
	float num_floats;
	int num;
	unsigned int i = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%s%d", separator, num);
		}
		else if (format[i] == 'f')
		{
			num_floats = va_arg(args, double);
			printf("%s%f", separator, num_floats);
		}
		else if (format[i] == 's')
		{
			my_str = va_arg(args, char *);
			if (my_str == NULL)
				my_str = "(nil)";
			printf("%s%s", separator, my_str);
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
