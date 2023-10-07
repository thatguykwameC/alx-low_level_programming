#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of digits with caveats
 * Numbers must be separated by a , then followed by a space
 * Prints only the smallest combination of two digits
 * Numbers should be printed in ascending order
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /*singles*/
		k = i / 10; /*doubles*/

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
