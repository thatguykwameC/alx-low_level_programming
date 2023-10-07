#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of 3 digits in ascending order
 * Numbers must be separated by a , then a space
 * The 3 digits must be dfferent
 * 012, 120, 102, 021, 201, 210 are considered the same
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}
