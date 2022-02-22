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
	char temp = s[0];

	while (s[j] != '\0')
	{
		j++;
	}
	for (; i < j; i++)
	{
		j--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

}
