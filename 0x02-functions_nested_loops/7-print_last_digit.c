#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number from where the last digit is obtained
 *
 * Return: last number.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last);
}
