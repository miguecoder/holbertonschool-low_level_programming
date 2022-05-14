#include "lists.h"
/**
 * get_dnodeint_at_index - unction that returns the nth node
 * of a dlistint_t linked list.
 * @head:pointer to a struct list
 * @index:index of the node, starting from 0
 * Return: The number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (node < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		node++;
	}
	return (head);
}
