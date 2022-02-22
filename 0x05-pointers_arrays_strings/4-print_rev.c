#include "main.h"
/**
 * print_rev -  function that prints a string reverse, followed by a new line
 *
 * @s: string reverse
 */
void print_rev(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (*s != '\0')
	{
		j++;
	}
	for (; i < j - 1 ;)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		_putchar(*s);
		j--;
	}
	_putchar('\n');
}
