#include "lists.h"
/**
 * insert_nodeint_at_index - Function that insert a new node
 * at a give position.
 * @head: pointer to pointer of a listint_t
 * @idx: index of the list where the new node should be added
 * @n: data n of new node.
 * Return: the address at new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
