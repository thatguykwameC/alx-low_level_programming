#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: positive int if s1 > s2, 0 if it matches,
 * else negative int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[1] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
