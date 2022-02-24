#include "main.h"
/**
 * _strncpy - Function that copy n char of a string
 * @dest:
 * @src:
 * @n:
 * Return:
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
