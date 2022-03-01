#include "main.h"
/**
 * _strstr - function that searches a string for any of a set of bytes.
 * @haystack: string to scanned.
 * @needle: string to searched.
 * Return: a pointer to the character in str1 that matches one of the
 * characters in str2, or NULL if no such character is found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	for (; *haystack != '\0';)
	{
		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
