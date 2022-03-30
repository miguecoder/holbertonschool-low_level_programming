#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to a struct lists
 * Return: the number of codes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		i++
	}
	return (i);
}
