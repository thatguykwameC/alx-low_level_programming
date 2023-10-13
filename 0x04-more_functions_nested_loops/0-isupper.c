#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks if a character is uppercase
 * @c: character to check
 *
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
