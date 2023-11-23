#include "main.h"

/**
 * binary_to_unit - converts binary number,
 * to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_unit(const char *b)
{
	int length, binaryNum;
	unsigned int num;

	if (!b)
		return (0);

	num = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, binaryNum = 1; length >= 0; length--, binaryNum *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		if (b[length] & 1)
			num += binaryNum;
	}
	return (num);
}
