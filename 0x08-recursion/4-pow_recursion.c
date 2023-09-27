#include "main.h"
/**
 * _pow_recursion - it returns the value of
 * x raised to the power of y
 * @x: it is the value of the base number
 * @y: value of the power
 *
 * Return: returns the value or -1 if the
 * value of y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
