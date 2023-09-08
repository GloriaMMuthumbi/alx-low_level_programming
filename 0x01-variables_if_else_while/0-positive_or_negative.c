#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - the main functions generates a random number
 * and stores it in the variable n. it the checks whether
 * the value of n is positive, negative or zero. it
 * prints the relevant message depending on the expression value.
 *
 * Return: Always 0. */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 0)
	{
		printf("is negative \n");
	}else if(n > 0)
	{
		printf("is positive \n");
	}else 
	{
		printf("is zero \n");
	}
	return (0);
}
