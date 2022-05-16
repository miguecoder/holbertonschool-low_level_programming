#include "main.h"
/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: Is a character that can be a letter or other thing.
 *
 * Return: 1 if c is a letter uppercase or lowercase, 0 if c is other thing
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
