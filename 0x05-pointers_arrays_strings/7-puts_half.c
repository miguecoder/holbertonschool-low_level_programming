#include "main.h"
/**
 * puts_half -  function that prints hslf of string.
 *
 * @str: string to put
 *
 */
void puts_half(char *str)
{
	int i = 0, lenght = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		lenght++;
	}
	n = lenght / 2;
	if (lenght % 2 != 0)
	{
		n = (lenght - 1) / 2;
	}

	for (i = n; i <= lenght; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
