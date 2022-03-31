#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer to head
 * @n: string to add to the beginning to head
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
