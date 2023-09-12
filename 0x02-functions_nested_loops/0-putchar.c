#include <stdio.h>
using namespace std;

/*
 * main - this function prints "_putchar" without using
 * printf or puts followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	string word[] = "_putchar";
	int i;

	for(i = 0; i < word.length() - 1; i++)
		putchar(word[i]);

	putchar('\n');

	return 0;
}
