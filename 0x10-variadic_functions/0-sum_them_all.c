#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of a variable number of integers
 * @n: number of integers to sum
 *
 * Return: the sum of all its arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned short i = 0;
	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
