#include "main.h"
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: This is the C string to be written in reverse.
 * Return: _putchar of s in reverse
 */
void _print_rev_recursion(char *s)
{
	if (!s || !*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
