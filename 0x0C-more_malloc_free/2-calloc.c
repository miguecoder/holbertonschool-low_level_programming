#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of array.
 * @size: size in bytes of each element.
 * Return: adress of memory
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *heap;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/**
	 * Allocates memory for a array nmemb elements and
	 * size bytes each
	 */
	heap = malloc(nmemb * size);

	if (heap == NULL)
	{
		free(heap);
		return (NULL);
	}

	for ( ; i < nmemb * size ; i++)
	{
		heap[i] = 0;
	}

	return (heap);
}
