#include <stdio.h>
/**
 * main - prints name of program followed
 * by a new line
 * @argc: integer represents number of command line
 * arguments
 * @argv: array containing the command line arguments
 *
 * Return: returns 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
		printf("%s\n", argv[0]);

	return (0);
}
