#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list
 * of a dlistint_t list.
 * @head:pointer to a struct list
 * @index: index node to delete.
 * Return: 1 on succes p -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head;
	dlistint_t *tmp = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp);
		}
		else
		{
			*head = NULL;
		}
		return (1);
	}
	while (i < index - 1 && node)
	{
		node = node->next;
		i++;
	}
	if (node)
	{
		tmp = node->next;
		if (tmp->next)
		{
			tmp->next->prev = node;
		}
		node->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
