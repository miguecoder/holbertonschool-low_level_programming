#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - function that adds a new node at the beginning
 * of a dlistint_t list.
 * @h:pointer to a struct list
 * @idx: index of new node.
 * @n: new integer add to a new node
 * Return: The number of nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new->next = *h;
				(*h)->prev = new;
			}
			*h = new;
			return (new);
		}
		while (i < idx - 1 && tmp)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp)
		{
			if (tmp->next)
			{
				tmp->next->prev = new;
			}
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
		}
		return (new);
	}
}
