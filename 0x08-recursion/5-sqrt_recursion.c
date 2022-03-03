#include "main.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: number
 * Return: x power y
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
/**
 * root - Is a funtion that found the root of a number n
 * @n: number to calculate to square
 * @r: iterator or root of n
 * Return: root of n
 * root function only give natural squae root of a number.
 */
int root(int n, int r)
{
	/**
	 * Este condicional if retorna -1, indicando que n
	 * tiene una raiz irracional, es decir, no se
	 * puede expresar como numero natural.
	 */
	if (r * r > n)
	{
		return (-1);
	}
	/**
	 * Este condicional if retorna r, ya que si r*r
	 * es igual a n, significa que r es la raiz cuadrada
	 * de n.
	 */
	if (r * r == n)
	{
		return (r);
	}
	/**
	 * Si ninguna de las condiciones anteriores se cumple
	 * seguirá buscando, aumentando el valor de r con recursividad,
	 * hasta que una de las 2 condiciones de cumpla
	 */
	return (root(n, r + 1));
}
