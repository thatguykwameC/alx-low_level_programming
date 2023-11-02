#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a pointer to the newly created array, else NULL
 */

int *array_range(int min, int max)
{
	int *array, i;

	/*CHecks if min is greater and returns NULL*/
	if (min > max)
		return (NULL);

	/*Allocate memory for the array*/
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	/*Populate the array with values from min to max*/
	for (i = 0; (min <= max); min++, i++)
		array[i] = min;

	return (array);
}
