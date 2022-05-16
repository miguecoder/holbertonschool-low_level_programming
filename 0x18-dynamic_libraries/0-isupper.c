#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 *
 * @c: This is a letter ramdom
 *
 * Return: 1 if c is uppercase, 0 in otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
