#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string..
 * @n: The strong to capitalize all words.
 * Return: n changed
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		for (n[i] >= 97 ; n[i] <= 122 ; i++)
		{
			if (n[i] == ' ' ||
			n[i] == '\t' ||
			n[i] == '\n' ||
			n[i] == ',' ||
			n[i] == ';' ||
			n[i] == '.' ||
			n[i] == '!' ||
			n[i] == '?' ||
			n[i] == '"' ||
			n[i] == '(' ||
			n[i] == ')' ||
			n[i] == '{' ||
			n[i] == '}' ||
			i == 0)
			{
				n[i] = n[i] - 32;
			}
		}
	}
	return (n);
}
