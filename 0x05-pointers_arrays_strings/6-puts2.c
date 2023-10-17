#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other char at even positions
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	unsigned short i;

	for (i = 0; i < strlen(str); i += 2)
	{
		if (str == NULL)
		{
			_putchar(' ');
			break;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
