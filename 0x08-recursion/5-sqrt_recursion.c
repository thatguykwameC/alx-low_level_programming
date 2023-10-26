#include "main.h"

/**
 * sqrtRecur - a sub function that finds the natural square root of a number
 * @n: number to calculate the square root of
 * @i: divisor to check
 *
 * Return: the resulting square root
 */

int sqrtRecur(int i, int n)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrtRecur(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number
 *
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (sqrtRecur(n, 0));
}
