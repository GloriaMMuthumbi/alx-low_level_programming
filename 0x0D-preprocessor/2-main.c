#include <stdio.h>
/**
 * main - it prints the name of the file it
 * was compiled from followed by a new line
 *
 * Return: returns success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
