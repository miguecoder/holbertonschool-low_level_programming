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
		while (!(n[i] >= 97 && n[i] <= 122))
		{
			i++;
		}
		if (n[i - 1] == ' ' ||
		n[i - 1] == '\t' ||
		n[i - 1] == '\n' ||
		n[i - 1] == ',' ||
		n[i - 1] == ';' ||
		n[i - 1] == '.' ||
		n[i - 1] == '!' ||
		n[i - 1] == '?' ||
		n[i - 1] == '"' ||
		n[i - 1] == '(' ||
		n[i - 1] == ')' ||
		n[i - 1] == '{' ||
		n[i - 1] == '}' ||
		i == 0)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
