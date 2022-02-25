#include "main.h"
/**
 * reverse_array - function that compares two strings.
 * @a: array of integers to reverses
 * @n: number of elements of array
 * Return:
 */
void reverse_array(int *a, int n)
{
	int temp = 0, i = 0;

	for (i = 0; i < n ; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
