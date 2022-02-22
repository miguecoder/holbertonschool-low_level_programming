#include <stdio.h>
#include "main.h"
/**
 * print_array - Function print elements of an array of integers.
 *
 * @a: It is the array
 *
 * @n: number of elements to print
 */
void print_array(int *a,  int n)
{
	int m = 0;

	for ( ; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
