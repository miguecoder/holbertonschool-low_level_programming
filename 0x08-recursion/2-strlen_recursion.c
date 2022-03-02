#include "main.h"
/**
 * _strlen_recursion - Function that prints a string in reverse
 * @s: This is the C string to be written in reverse.
 * Return: _putchar of s in reverse
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
