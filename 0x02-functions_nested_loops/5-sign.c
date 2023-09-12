#include "main.h"

/**
 * print_sign - this function prints the sign of
 * a number
 *
 * @n: number being checked
 *
 * Return: returns 1 and prints + if n > 0,
 * returns 0 and prints 0 if n === 0, returns
 * -1 and prints - if n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
        {
                putchar('-');
                return (-1);
        }else if (n == 0)
        {
                putchar('0');
        }
	return (0);
}
