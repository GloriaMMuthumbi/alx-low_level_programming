#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: vector for the arguments
 *
 * Return: returns a pointer to the new string
 * on success otherwise NULL. Returns NULL if
 * ac == 0 or av == 1.
 */
char *argstostr(int ac, char **av)
{
	char *res;
	int i, j, k;
	int l = 0;

	if (ac == 0)
		return (NULL);

	for (l = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	res = malloc((l + 1) * sizeof(char));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}
	for (i = j = k = 0; k < l; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			res[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < l - 1)
			res[k] = av[i][j];
	}
	res[k] = '\0';
	return (res);
}
