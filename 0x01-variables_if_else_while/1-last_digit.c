#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - the main function takes a value randomly
 * generated and stored in the varible n. the value
 * is then looped through and the last digit of the
 * value is printed.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5) 
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);	
	} else if (last <= 5 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	} else
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	return (0);
}
