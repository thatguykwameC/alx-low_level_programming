#include "main.h"

/**
 * swap_int - Entry point
 * Description: Swaps the values of two integers
 * @a: it is an int pointer that holds addresses
 * @b: it is an int pointer that holds address of other data type
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
