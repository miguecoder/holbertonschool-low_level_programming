#include "main.h"
/**
 * print_rev -  function that prints a string reverse, followed by a new line
 *
 * @s: string reverse
 */
void print_rev(char *s)
{
	int i = 0, j = _strlen(*s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j++;
		_putchar(s);
	}
	_putchar('\n');
}
