#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 * @s: area to be filled
 * @b: char to copy
 * @n: number of times to copy
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _calloc - allocates memory for an array, given a number of elements
 * @nmemb: number of elemments
 * @size: size of each element
 *
 * Return: if error, NULL. Else pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	/*Checks cases wherewe nmemb or size is 0*/
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	/*Allocates memory using malloc*/
	ptr = malloc(nmemb * size);

	/*Checks if malloc succeded*/
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
