#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character _ should be printed
 *
 * Return: n times \
 */
void print_diagonal(int n)
{
	int i, j;/*Variables para recorrer filas y espacios en cada fila*/

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)/*Recorremos n filas*/
		{
			for (j = 0 ; j <= i ; j++)/*Recorremos las j posiciones en cada fila*/
			{
				if (i == j)/*Este sería el final de cada linea*/
				{
					_putchar('\\');
					_putchar('\n');
				}
				else/*Estos serían los espacios antes del final de la línea*/
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
