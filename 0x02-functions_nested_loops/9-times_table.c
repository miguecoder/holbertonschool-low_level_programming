#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 9 times table.
 *
 */

void times_table(void)
{
	/*Ejm: 4          x      3     =     12*/
	/*multiplicando  x  multiplicador  = producto*/
	/*    mnd        x       mdor      */
	int mndo, mdor, producto;

	for (mndo = 0 ; mndo <= 9 ; mndo++)
	{
		for (mdor = 0 ; mdor <= 9 ; mdor++)
		{
			producto = mndo * mdor;
			if (mdor == 0)
			{
				_putchar(producto + '0');
			}
			if (producto < 10 && mdor != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(producto + '0');
			} else if (producto >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((producto / 10) + '0');
				_putchar((producto % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
