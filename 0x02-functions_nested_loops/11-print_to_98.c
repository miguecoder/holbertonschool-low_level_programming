#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print the natural numbers from n to 98
 *
 * @n: number
 *
 * Return: print the number separated for commas
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98 ; n--)
		{
			printf("%d, ", n);
		}
	} else if (n < 98)
	{
		for (; n < 98 ; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
