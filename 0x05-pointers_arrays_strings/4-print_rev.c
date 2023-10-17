#include "main.h"

/**
 * print_rev - Entry point
 * Description: A function that prints a string in reverse
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;

	for (c--; c >= 0; c--)
		_putchar(s[c]);

	_putchar('\n');
}
