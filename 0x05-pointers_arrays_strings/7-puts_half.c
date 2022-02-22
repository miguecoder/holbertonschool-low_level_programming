#include "main.h"
/**
 * puts_half -  function that prints hslf of string.
 *
 * @str: string to put
 *
 */
void puts_half(char *str)
{
	int i = 0, n, lenght = 0;

	for (; str[i] != '\0'; i++)
	{
		lenght++;
	}

	n = lenght / 2;

	if (lenght % 2 != 0)
	{
		n = (lenght - 1) / 2;
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
