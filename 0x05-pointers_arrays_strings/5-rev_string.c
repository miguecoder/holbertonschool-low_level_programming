#include "main.h"
/**
 * rev_string - Program that reverse a string
 *
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (*s != '\0')
	{
		j++;
	}
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}

}
