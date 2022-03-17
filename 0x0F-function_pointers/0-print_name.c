#include "function_pointers.h"
/**
 * print_name - Function that prints name.
 * @name: name to print
 * @f: pointer to function.
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
