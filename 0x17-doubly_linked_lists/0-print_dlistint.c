#include "lists.h"
#include <stdio.h>
/*
 * print_dlistint -  function that prints all the elements of a dlistint_t list.
 * @h:pointer to a struct list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
