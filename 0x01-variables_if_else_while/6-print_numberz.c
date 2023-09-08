#include <stdlib.h>
#include <stdio.h>

/**
 * main - this main function prints all single
 * digit numbers of base 10 starting from 0, followerd
 * by a new line. the datatype char is not used and
 * putchar should only appear twice. 
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = '1'; num <= '9'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
