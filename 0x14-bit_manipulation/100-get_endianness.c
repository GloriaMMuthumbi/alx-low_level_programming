#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: returns 0 if big endian. otherwise 1
 * if little endian
 * Description: this function checks the endianness of system
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *pointer = (char *)&test;

	if (*pointer == 1)
		return (1);
	else
		return (0);
}
