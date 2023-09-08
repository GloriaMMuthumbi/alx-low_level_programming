#include <stdlib.h>

/**
 * main - this main function prints the alphabet
 * in lowercase without using printf.it uses for
 * for loop and putchar only appears twice.
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch;

	for (ch='a'; ch<='z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
