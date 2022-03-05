#include "main.h"
/**
 * _strncpy - Function that copy n char of a string
 * @dest: is a void array
 * @src: is a string
 * @n: Maximum number of characters to be copied from source
 * Return: dest
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
