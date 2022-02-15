#include "main.h"

/**
 * print_sign -  prints the sign of a number.
 *
 * @n: Is a number int number.
 *
 * Return: 1, 0 0r -1 according to sign.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchat('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');


}
