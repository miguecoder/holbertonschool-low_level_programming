#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: numer of string to be printed between the strings.
 * @...: A variable number of numbers to be printed.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
