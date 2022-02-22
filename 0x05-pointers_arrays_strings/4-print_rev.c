#include "main.h"
/**
 * print_rev -  function that prints a string reverse, followed by a new line
 *
 * @s: string reverse
 */
void print_rev(char *s)
{
	int i, j = 0;
	char temp;

	while (*s != '\0')
	{
		j++;
	}
	i = j;
	for (; i > 0 ;)
	{
		i--;
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
