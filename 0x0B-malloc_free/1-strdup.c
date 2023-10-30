#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: duplicated string
 *
 * Return: a pointer to the duplicated string, else NULL
 * if memory was insufficient
 */

char *_strdup(char *str)
{
	int i, j;
	char *str_duplicate;

	for (i = 0; str[i] != '\0'; i++)
		;

	str_duplicate = malloc(sizeof(char) * (i + 1));

	if (str == NULL || str_duplicate == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		str_duplicate[j] = str[j];

	return (str_duplicate);
}
