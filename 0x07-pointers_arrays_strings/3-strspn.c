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
	int i = 0, j = 0;
	int matchs = 0;

	for (; s[i] >= '\0' ; i++)
	{
		for (; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				matchs++;
			}
			else if (accept[j] == '\0')
			{
				return (matchs);
			}
		}
	}
	return (matchs);
}
