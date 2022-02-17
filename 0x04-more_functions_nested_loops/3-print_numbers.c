#include "main"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar("%d", i);
	}
	_putchar('\n');
}
