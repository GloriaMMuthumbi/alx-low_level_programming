#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - functions that allocates memory for an
 * array
 * @nmemb: number of elements in array
 * @size: size of elements
 *
 * Return: returns a pointer to allocated memory.
 * returns NULL if nmemb or size is 0 and malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
