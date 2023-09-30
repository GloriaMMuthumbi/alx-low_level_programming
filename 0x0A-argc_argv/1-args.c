#include <stdio.h>
/**
 * main - prints number of command line arguments
 * passed into it
 * @argc:  integer represents number of command line
 * arguments
 * @argv: array containing the command line arguments
 *
 * Return: returns 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
