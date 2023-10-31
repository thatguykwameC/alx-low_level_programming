#include "main.h"
#include <stdlib.h>

/**
 * str_concat - it concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer that points to a newly allocated space in memory which
 * contains the content of s1 and s2 and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *newString;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	/*
	 * if (s2 == NULL)
	 * s2 = "";
	 */

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	newString = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (newString == NULL)
		return (NULL);

	for ((k = 0, l = 0); k < (i + j + 1); k++)
	{
		if (k < 1)
			newString[k] = s1[k];
		else
			newString[k] = s2[l++];
	}

	return (newString);
}
