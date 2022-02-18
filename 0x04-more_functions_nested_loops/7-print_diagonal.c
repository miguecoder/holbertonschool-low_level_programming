#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character _ should be printed
 *
 * Return: n times \
 */

void print_diagonal(int n)
{
	char c;

	for (c = 0 ; c <= n ; c++)
	{
		if (c == n)
		{
			_putchar('\\');
		}
		else
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
