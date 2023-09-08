#include <stdio.h>

/**
 * main - this function prints all possible
 * combinations of two two-digit numbers in ascending
 * order, seperated by a comma and a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;
    int first_combination = 1;

    for (num1 = 0; num1 <= 99; num1++)
    {
        for (num2 = num1 + 1; num2 <= 99; num2++)
        {
            if (!first_combination)
            {
                putchar(',');
                putchar(' ');
            }

            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');
            putchar(' ');
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');

            first_combination = 0;
        }
    }

    putchar('\n');

    return (0);
}
