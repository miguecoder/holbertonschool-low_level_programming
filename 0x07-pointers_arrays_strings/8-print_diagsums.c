#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: array
 * @size: number of columns
 * Return: print two sum
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size ; i++)
	{
		sum1 += a[y * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
