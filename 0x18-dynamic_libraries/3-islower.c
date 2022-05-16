#include "main.h"
/**
 * _islower - (int c) checks for lowercase character.
 *
 * @c: Is the parameter (one letter that  can be lowercase or uppercase)
 *
 * Return: 1 if is lowercase, 0 if otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
