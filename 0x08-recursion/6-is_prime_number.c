#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (yes_or_not_prime(n, n - 1));
}

/**
 * yes_or_not_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 otherwise
 */
int yes_or_not_prime(int n, int i)
{
	/**
	 * Ya que i es los numeros <= n-1,
	 * si i llega a ser el número 1, significa que
	 * no se encontro ningun i menor a n en que se
	 * cumpliera la segunda condición.
	 */
	if (i == 1)
	{
		return (1);
	}
	/**
	 * Cuando esta condición se cumple. indica que
	 * el numero n no es un número primo, ya que tiene
	 * una division exacta (residuo cero) con algún valor i
	 * entre n-1 e i > 1
	 */
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	/**
	 * La funcion de la recursividad en este problema es
	 * cambiar el valor de i desde i = n - 1 hasta i = 1
	 * o i = #, reduciendo -1 en cada llamado de la función,
	 * esto con el fin de que alguna de las 2 condiciones
	 * se cumpla
	 */
	return (yes_or_not_prime(n, i - 1));
}
