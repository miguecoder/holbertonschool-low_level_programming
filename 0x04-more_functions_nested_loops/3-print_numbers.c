#include "main"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: all numbre from 0 to 9.
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar("%i", i);
	}
	_putchar("\n");
}
