#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	for (; i <= 9 ; i++)
	{
		ch = 'a';
		for (; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
