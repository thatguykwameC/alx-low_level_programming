#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: The string to be searched
 * @c: The char to be located
 *
 * Return: a pointer to the first occurence of the char c
 * in the string s, or NULL if the char is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
