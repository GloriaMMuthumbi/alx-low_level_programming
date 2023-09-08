#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function prints all single digit
 * numbers of base 10 starting from 0 followed
 * by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");

	return (0);
}
