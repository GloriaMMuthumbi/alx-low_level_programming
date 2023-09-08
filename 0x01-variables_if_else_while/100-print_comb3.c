#include <stdio.h>

/**
 * main - the function prints all possible combinations
 * of two digit numbers in ascending ordeer, seperated
 * by a comma and space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int digit1, digit2;
	int first_combination = 1;

	for (digit1 = 0; digit1 <= 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			if (!first_combination)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(digit1 + '0');
		       	putchar(digit2 + '0');
			first_combination = 0;
		}
	}
	putchar('\n');
	return (0);
}
