#include <stdio.h>
#include <main.h>
using namespace std;

/*
 * _putchar funtion - this function prints "_putchar" without using
 * printf or puts followed by a new line.
 *
 * main - this function uses the _putchar() to print the input
 *
 * Return: Always 0.
 */

int _putchar(char * word)
{
	int i;
	
	for(i = 0; i < word.length() - 1; i++)
		putchar(word[i]);
	
	putchar('\n');
}


int main(void)
{
	char * word = "_putchar";
	_putchar(word);

	return 0;
}
