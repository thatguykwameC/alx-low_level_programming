#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenantes all arguements
 * @ac: arguement count
 * @av: argument variable
 *
 * Return: a pointer tot he new string else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0, l = 0;
	char *newString;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	l += ac;

	newString = malloc(sizeof(char) * l + 1);

	if (newString == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newString[k] = av[i][j];
			k++;
		}

		if (newString[k] == '\0')
			newString[k++] = '\n';
	}

	return (newString);
}
