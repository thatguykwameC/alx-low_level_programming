#include "main.h"

/**
 * get_bit - returns the value of a bit's
 * given index
 * @n: number to check
 * @index: the index
 *
 * Return: the value of the bit @index or
 * -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (n == 0 && index < 64)
		return (0);

	for (bit = 0; bit <= 63; n >>= 1, bit++)
	{
		if (index == 1)
			return (n & 1);
	}

	return (-1);
}
