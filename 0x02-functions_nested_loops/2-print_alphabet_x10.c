#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - it prints the alphabet followed
 * by a new line 10 times in lowecase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++) 
	{
		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
	
		putchar('\n');
	}
}
