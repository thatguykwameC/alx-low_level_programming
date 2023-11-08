#include "function_pointers.h"

/**
 * array_iterator - executes a functon given as a
 * parameter on each element of an array
 * @array: array of integers
 * @size: the size of the array
 * @action: a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	for (j = 0; j < size; j++)
		action(array[j]);
}
