#include <stdio.h>
/**
 * div - Function that divide two numbers
 * @a: argument for the function
 * @b: argument for the function
 * Return: 0.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a / b);
}
