#include "function_pointers.h"

/**
 * int_index - searches for an integer value
 * in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the comparator function pointer
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
