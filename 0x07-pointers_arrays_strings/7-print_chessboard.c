#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: putchar of a chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8 ;)
	{
		for (; j < 8 ;)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
