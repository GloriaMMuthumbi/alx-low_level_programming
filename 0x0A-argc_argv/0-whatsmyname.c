#include <stdio.h>
/**
 * main - prints name of program followed
 * by a new line
 */
int main(int argc, char *argv[])
{
	if(argc > 0 && argv[0])
		printf("%s\n", argv[0]);

	return 0;
}
