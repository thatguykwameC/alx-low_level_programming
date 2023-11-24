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
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((int)((n >> index) & 1));
}
