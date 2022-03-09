#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string given as a parameter.
 * Return: 0
 */
char *_strdup(char *str)
{
	char *newp;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	newp = malloc(sizeof(char) * (i + 1));

	if (newp == NULL)
	{
		return (NULL);
	}

	for ( ; str[j] ; j++)
	{
		newp[j] = str[j];
	}

	return (newp);
}
