#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointerto newly allocated space
 * in memory to a new string which is a duplicate of str.
 * Memory of new string is obtained using malloc and can
 * be freed with free
 * @str: the string to be used
 *
 * Return: returns a pointer to the duplicate string on
 * success and NULL if memory available was insufficient
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = malloc((i + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dup[j] = str[j];

	return (dup);
}
