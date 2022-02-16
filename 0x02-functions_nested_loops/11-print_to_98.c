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
	if (n > 98)
	{
		for (; n > 98 ; n--)
		{
			_putchar((n) + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else if (n < 98)
	{
		for (; n < 98 ; n++)
		{
			_putchar((n) + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else if (n == 98)
	{
		x = 98;
		_putchar((x) + '0');
	}
	_putchar('\n');
}
