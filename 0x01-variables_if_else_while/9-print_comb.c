#include <stdlib.h>
#include <stdio.h>

/**
 * main - this function prints all possible
 * combinations of single-digit numbers. They are
 * seperated by , followed by a space. they are in
 * ascending order. no use of type char.
 *
 * Return: Always 0;
 */

int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		if (n != 9) 
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		putchar(n);
	}

	putchar('\n');

	return (0);
}
