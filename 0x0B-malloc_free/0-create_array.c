#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initalizes it with a specific char
 * @size: size of array
 * @c: char to assign
 *
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_assign;

	char_assign = malloc(sizeof(char) * size);

	if (size == 0 || char_assign == NULL) /*Handles invalid input*/
		return (NULL);

	for (i = 0; i < size; i++)
		char_assign[i] = c;

	return (char_assign);
}
