#include  "main.h"

/**
 * main - Entry point
 *
 * Description: A function that prints without using standard libraries
 *
 * Return: 0
 */

int main(void)
{
	char *str = "_putchar";

	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');

	return (0);
}
