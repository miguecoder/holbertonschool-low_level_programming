#include "main.h"
#include <math.h>

/**
 * _abs - Function that computes the absolute value of an integer.
 *
 * @n: inpput that a number int
 *
 * Return: 0
 *
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
