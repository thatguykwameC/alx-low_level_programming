#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - it allocates memory, if it fails
 * terminate process with status of 98 else return a pointer
 * @b: size of memory to be allocated
 *
 * Return: a pointer @p to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	/*Allocate memory of size 'b' using malloc*/
	p = malloc(b);

	/*Checks if malloc was successful*/
	if (p == NULL)
		exit(98);

	return (p);
}
