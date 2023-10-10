#include "main.h"

/**
 * _islower - Entry point
 *
 *Description: checks for lower case characters
 *
 * Return: 1 if lower else 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
