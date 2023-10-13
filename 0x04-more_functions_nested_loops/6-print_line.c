#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Draws a straight line
 * @n: Length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
