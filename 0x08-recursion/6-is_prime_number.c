#include "main.h"

/**
 * checksPrime - recursive function to check if number is prime
 * @n: number to check
 * @i: divisor to check
 *
 * Return: 1 if prime else 0
 */

int checksPrime(int n, int i)
{
	if (n < 2)
		return (0);

	else
	{
		if (n % i == 0)
			return (0);

		if (i * i > n)
			return (1);

		else
			return (checksPrime(n, (i + 1)));
	}
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (checksPrime(n, 2));
}
