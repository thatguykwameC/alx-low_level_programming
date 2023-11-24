#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 @ a given index
 * @n: number to clear bit for
 * @index: index at which the bit is cleared
 *
 * Return: 1 if it worked, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;

	return (1);
}
