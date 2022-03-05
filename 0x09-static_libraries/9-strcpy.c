#include "main.h"
/**
 * char *_strcpy - Function that copies the string pointed to by src
 *
 * @dest: where copy
 *
 * @src: string to copy
 *
 * Return: dest, where is copy src.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, b = 0;

	while (src[a] != '\0')/*src[a]=*(src+a)*/
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
