#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer to the destination array.
 * @src: pointer to the source data to be copied.
 * @n: number of bytes to copy
 * Return: nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int byte = n;

	for (; i < byte ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
