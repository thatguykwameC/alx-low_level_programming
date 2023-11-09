#include "variadic_functions.h"

/**
 * print_all - Prints all arguemets passed to it
 * @format: A list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	char *str;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", sep, va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char*);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
		}

		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
