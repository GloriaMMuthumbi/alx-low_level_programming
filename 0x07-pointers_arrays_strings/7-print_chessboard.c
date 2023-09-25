#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: presents 2 dimensional array of 8 x 8
 *
 * Return: returns nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
