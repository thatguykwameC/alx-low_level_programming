#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i <= (n - 1); i++)
	{
		x = a[i];
		a[i] = a[n - 1];
		a[n - 1] = x;
		n--;
	}
}
