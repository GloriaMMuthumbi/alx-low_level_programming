#include <stdlib.h>
#include <stdio.h>

/**
 * main - this function prints all the numbers of
 * base 16 in lowercase followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char n = '0';

	while (n <= 'f')
	{
		if ((n >= '0' && n <= '9') || (n >= 'a' && n <= 'f'))
			putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
