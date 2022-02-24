#include "main.h"
/**
 * _strcat - concatenar two integers.
 *
 * @dest: array tthe char, with 98 spaces
 *
 * @src: array to concatenate
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (*dest++ != '\0')
	{
		a++;
	}
	b = 0;
	dest--;
	while (*src++ != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
