#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: Double pointer
 * @to: character
 * Return: 0 always.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
