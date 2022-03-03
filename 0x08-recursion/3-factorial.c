#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: number
 * Return: the fasctorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		/*
		 * Este return opera multiplicando
		 * el ultimo valor (n) por el anterior (n-1)
		 * despues n*n-1*n-1-1*n-1-1-1... etc
		 */
		return (n * factorial(n - 1));
	}
}
