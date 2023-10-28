#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to scan
 * @accept: string containing characters to match
 *
 * Return: number of bytes in the initial segement of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
	if (!accept[j])
		break;
	}
	return (i);
}
