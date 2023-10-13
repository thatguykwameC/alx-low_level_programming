#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: draws a diagonal line
 * @n: number of times \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			if (j != 1)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
}
