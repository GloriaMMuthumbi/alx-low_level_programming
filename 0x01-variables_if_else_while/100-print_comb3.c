#include <stdio.h>

/**
 * main - This is the main function that prints all possible
 * different combinations of two digits in ascending order, separated
 * by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit1, digit2;

    for (digit1 = 0; digit1 <= 8; digit1++) // Loop through the first digit (0 to 8)
    {
        for (digit2 = digit1 + 1; digit2 <= 9; digit2++) // Loop through the second digit (one greater than the first digit to 9)
        {
            putchar(digit1 + '0'); // Print the first digit
            putchar(digit2 + '0'); // Print the second digit

            if (digit1 != 8 || digit2 != 9)
            {
                putchar(','); // Print comma if not the last combination
                putchar(' '); // Print space if not the last combination
            }
        }
    }

    putchar('\n'); // Add a newline character to end the output

    return (0);
}
