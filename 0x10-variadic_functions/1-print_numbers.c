#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, passed to it
 * @separator: separator between numbers
 * @n: number of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int temp = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, int);

		if (separator != NULL)
			(i < (n - 1) ? printf("%d%s", temp, separator) : printf("%d", temp));
		else
			printf("%d", temp);
	}

	va_end(args);

	putchar('\n');
}
