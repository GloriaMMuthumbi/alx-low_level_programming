#include <stdlib.h>
#include <stdio.h>

/**
 * main - this main function prints the alphabet
 * in lowercase followed by the alphabet in uppercase.
 * it does not use printf. it uses for loop and
 * putchar only appears thrice.
 *
 * Return: Always 0.
 */

int main(void)
{
	char uch, lch;

	for (lch = 'a'; lch <= 'z'; lch++)
	{
		putchar(lch);
	}
	for (uch = 'A'; uch <= 'Z'; uch++)
	{
		putchar(uch);
	}
	putchar('\n');

	return (0);
}
