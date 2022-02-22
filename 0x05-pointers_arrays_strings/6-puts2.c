#include "main.h"
/**
 * puts2 -  function that prints a string, followed by a new line
 *
 * @str: string to put
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str = *str + 2);
	}
	_putchar('\n');
}
