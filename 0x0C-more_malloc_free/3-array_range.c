#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: interger minimum.
 * @max: integer maximum.
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *heap;
	int i, n;

	if (min > max)
	{
		return (NULL);
	}

	/**
	 * Allocates memory for a array nmemb elements and
	 * size bytes each
	 */
	n = (max - min) + 1;
	heap = malloc(n * sizeof(*heap));

	if (heap == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < n ; i++)
	{
		heap[i] = min;
		min++;
	}

	return (heap);
}
