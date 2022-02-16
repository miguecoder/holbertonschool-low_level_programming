#include "main.h"

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
	int i, j, x;


	if (n > 98)
	{
		for (i = n; i >= 98 ; i--)
		{
			_putchar((i) + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else if (n < 98)
	{
		for (j = n; j <= 98 ; j++)
		{
			_putchar((j) + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else
	{
		x = 98;
		_putchar((x) + '0');
	}
	_putchar('\n');
}
