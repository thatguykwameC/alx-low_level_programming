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
	unsigned int length1, length2, i, j;
	char *newString;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;

	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	newString = malloc(sizeof(char) * (length1 + length2 + 1));

	if (newString == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		newString[i] = s1[i];

	for (j = 0; i < length2; j++)
	{
		newString[i] = s2[j];
		i++;
	}


	return (newString);
}
