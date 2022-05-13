#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - function that prints all the elements of a dlistint_t list
 * @h:pointer to a struct list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
