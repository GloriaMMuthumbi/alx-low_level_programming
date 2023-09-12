#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the alphabet
 * in lowercase followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
