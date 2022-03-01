#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to scanned.
 * @accept: Char to searched.
 * Return: a pointer to the character in str1 that matches one of the
 * characters in str2, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
