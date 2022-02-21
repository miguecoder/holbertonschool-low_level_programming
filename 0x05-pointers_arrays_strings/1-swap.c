#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: Firts integer to swap.
 *
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
