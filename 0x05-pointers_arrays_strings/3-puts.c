#include "main.h"
/**
 * _puts -  function that prints a string, followed by a new line
 *
 * @str: string to put
 *
 */
void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
