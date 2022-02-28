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
	int i = 0;
	int j, matchs = 0;

	for (; s[i] >= '\0' ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				matchs++;
			}
		}
	}
	return (matchs);
}
