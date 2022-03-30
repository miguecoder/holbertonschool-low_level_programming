#include "lists.h"
/**
 * list_len - function that prints all the elements of a list_t list
 * @h: pointer to a struct lists
 * Return: the number of codes.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
