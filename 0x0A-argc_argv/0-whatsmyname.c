#include <stdio.h>

/**
 * main - prints it's own name, followed by a new line
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
