#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints fizz for multiples of 3,
 * buzz for multiples of 5 and fizzbuzz for multiples of 15
 *
 * Return: 0;
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("Fizzbuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	_putchar('\n');

		return (0);
}
