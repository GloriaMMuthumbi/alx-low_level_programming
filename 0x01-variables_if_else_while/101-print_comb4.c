#include <stdio.h>

/**
 * main - this function prints all possible
 * combinations of three digits in ascending order
 * seperated by a comma and space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int digit1, digit2, digit3;
	int first_combination = 1;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				if (!first_combination)
				{
					putchar(',');
					putchar(' ');
				}

				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				first_combination = 0;
			}
		}
	}

	putchar('\n');

	return (0);
}

