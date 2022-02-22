#include "main.h"
/**
 * rev_string - Program that reverse a string
 *
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i = 0, j = _strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}

}
