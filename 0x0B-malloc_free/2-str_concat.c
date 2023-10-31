#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned int length1, length2, sumLength, i;
	char *newString;

	if (s1 != NULL)
		length1 = strlen(s1);

	if (s2 != NULL)
		length2 = strlen(s2);

	sumLength = (length1 + length2);

	newString = malloc(sumLength + 1);

	if (newString != NULL)
	{
		for (i = 0; i < sumLength; i++)
		{
			if (i >= length1)
				newString[i] = s2[i - length1];
			else
				newString[i] = s1[i];
		}
		newString[sumLength] = '\0';
	}
	return (newString);
}
