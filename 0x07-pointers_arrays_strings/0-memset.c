#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s:
 * @b:
 * @n:
 * Return:
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
