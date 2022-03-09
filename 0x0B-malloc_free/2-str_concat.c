#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by
 * the contents of s2, and null terminated
 **/
char *str_concat(char *s1, char *s2)
{
	char *str_C;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	str_C = malloc(sizeof(char) * (i + j + 1));

	if (str_C == NULL)
	{
		return (NULL);
	}
	i = j = 0;

	while (s1[i] != '\0')
	{
		str_C[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_C[i] = s2[j];
		i++, j++;
	}
	str_C[i] = '\0';
	return (str_C);
}
