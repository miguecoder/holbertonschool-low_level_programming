#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head:pointer to a struct list
 * @n: new integer add to a new node
 * Return: The number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *new_head;

	if (new == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new_head = *head;
	while (new_head->next != NULL)
	{
		new_head = new_head->next;
	}
	new->prev = new_head;
	new_head->next = new;
	return (new);
}
