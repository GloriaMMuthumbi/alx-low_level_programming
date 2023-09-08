#include <stdlib.h>
#include <stdio.h>

/**
 * main - this main function prints the alphabet
 * in lowercase and in reverse order without
 * using printf.it uses for loop and putchar
 * only appears twice.
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
