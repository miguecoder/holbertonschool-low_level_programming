#include "main.h"

/**
 * more_numbers - function that prints 10 timen, from 0 to 14.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (j = '0' ; j <= '14')
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
