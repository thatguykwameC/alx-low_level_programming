#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: number to set bit for
 * @index: index to set bit at
 *
 * Return: 1 if it worked else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}
