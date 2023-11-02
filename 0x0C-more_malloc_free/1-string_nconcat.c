#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: a pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int total_length, i;

	/*Handles cases where s1, s2 is NULL or an empty string*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*Calculate the lengths of s1 and s2*/
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	/*Calculate the length of the resulting string*/
	if (n >= length_s2)
		total_length = length_s1 + length_s2;
	else
		total_length = length_s1 + n;

	/*Allocate memory for the concatenated string*/
	newString = (char *)malloc(total_length + 1);

	if (newString !=  NULL)
	{
		for (i = 0; i <= (length_s1 - 1); i++)
			newString[i] = s1[i];

		for (i = 0; i <= (n - 1) && i < length_s2; i++)
			newString[i + length_s1] = s2[i];

		newString[i + length_s1] = '\0';
	}

	return (newString);
}
