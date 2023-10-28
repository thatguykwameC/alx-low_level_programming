#include "main.h"
/**
 * _strcpy - Copies a string from src to dest
 * @dest: destinaton buffer
 * @src: source buffer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
