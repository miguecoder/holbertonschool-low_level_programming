#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by
 * first n bytes of s2, and null terminated
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_C;
	unsigned int j = n, i;

	i = j = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] ; i++)
		j++;

	str_C = malloc(sizeof(char) * (j + 1));

	if (str_C == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		str_C[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		str_C[i] = s2[j];
		i++, j++;
	}
	str_C[i] = '\0';
	return (str_C);
}
