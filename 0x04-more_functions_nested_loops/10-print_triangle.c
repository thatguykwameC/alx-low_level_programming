#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: prints a triangle using #
 * @size: height of the trianlge
 */

void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (s = size - 1; s != 0; s--)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}

