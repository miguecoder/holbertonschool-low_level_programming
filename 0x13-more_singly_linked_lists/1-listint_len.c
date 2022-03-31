#include "lists.h"
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: pointer to a struct lists
 * Return: the number of codes.
 */

size_t listint_len(const listint_t *h)
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
