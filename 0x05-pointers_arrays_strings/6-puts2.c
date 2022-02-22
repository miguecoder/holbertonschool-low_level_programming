#include "main.h"
/**
 * puts2 -  function that prints a string, followed by a new line
 *
 * @str: string to put
 *
 */
void puts2(char *str)
{
	int i = 0, lenght = 0;

	while (*str != '\0')
	{
		str++;
		lenght++;
	}
	str++;
	for (; i <= lenght - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
