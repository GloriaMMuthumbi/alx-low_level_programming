#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - it creates an array of chars
 * and initializes it with a specified char
 * @size: number of elements in the array
 * @c: character to initialize the array
 *
 * Return: returns NULL if size is 0. also returns
 * a pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
