#include "main.h"

/**
 * puts2 - prints every other char at even positions
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
