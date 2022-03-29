#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to a struct lists
 * Return: the number of codes.
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0, h != NULL, i++)
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
	}
	return (i);
}
