#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the str to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;
	char temp;

	while (*end)
	{
		++end;
		++length;
	}

	--end;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		++start;
		--end;
	}
}
