#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: is a pointer to block memory to fill
 * @b: char with fill the clock memory.
 * @n: This is the number of bytes to be set to the value.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
