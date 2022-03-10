#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes to reserve
 * Return: pointer to allocates memory.
 **/
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
