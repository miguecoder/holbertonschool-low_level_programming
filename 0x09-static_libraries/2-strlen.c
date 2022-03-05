#include "main.h"
#include <string.h>
/**
 * _strlen - Function that return the length of a string.
 *
 * @s: String.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	/*strlen(s); Respuesta rápida*/
	int length = 0;

	while (*s++)
	{
		++length;
	}
	return (length);
}
