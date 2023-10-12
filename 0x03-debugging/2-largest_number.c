#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: Prints the largest of 3 integers
* @a: first number
* @b: second number
* @c: third number
*
* Return: 0
*/

int main(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	else
		largest = c;

	return (largest);
}
