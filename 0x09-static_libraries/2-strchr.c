#include "main.h"
/**
 * _strchr - Function that search the first ocurrence of a char.
 * @s: sring to scanned.
 * @c: Char to searched.
 * Return: a pointer to the first ocurrence.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
