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
	int j;
	unsigned int matchs = 0;

	while (*s)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (*s == accept[j])
			{
				matchs++;
				break;
			}
			else if (accept[j] == '\0')
			{
				return (matchs);
			}
		}
		s++;
	}
	return (matchs);
}
