#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
