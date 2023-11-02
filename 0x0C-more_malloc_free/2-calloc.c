#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, given a number of elements
 * @nmemb: number of elemments
 * @size: size of each element
 *
 * Return: if error, NULL. Else pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	/*Checks cases wherewe nmemb or size is 0*/
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	/*Allocates memory using malloc*/
	ptr = malloc(nmemb * size);

	/*Checks if malloc succeded*/
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
