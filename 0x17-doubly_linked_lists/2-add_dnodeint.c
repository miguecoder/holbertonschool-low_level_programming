#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - function that adds a new node at the beginning 
 * of a dlistint_t list.
 * @h:pointer to a struct list
 * Return: The number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
