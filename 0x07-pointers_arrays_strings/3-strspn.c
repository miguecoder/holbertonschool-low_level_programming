#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: string to scanned.
 * @accept: Char to searched.
 * Return: number of characters in the initial segment of s
 * which consist only of characters from a str2 o in this case c.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
