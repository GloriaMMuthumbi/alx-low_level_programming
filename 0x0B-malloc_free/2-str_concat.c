#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings. It returns
 * a pointer to a new allocated space in memory wich
 * contains contents of s1 followed by s2 and null
 * terminated
 * @s1: first string in result
 * @s2: second string in result
 *
 * Return: returns a pointer on success or NULL on failure
 * and NULL is treated as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	res = malloc((len1 + len2 + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (j = 0; j < len2; j++)
		res[i + j] = s2[j];

	res[i + j] = '\0';

	return (res);
}
