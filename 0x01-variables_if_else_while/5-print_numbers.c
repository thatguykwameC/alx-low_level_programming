#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all base 10 digits counting from 0
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
