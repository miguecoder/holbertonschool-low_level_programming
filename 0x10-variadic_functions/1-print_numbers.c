#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator:is the string to be printed between numbers.
 * @n: numer of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(arg, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(arg, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(arg, int));
		}
	}

	va_end(arg);

	printf("\n");
}
