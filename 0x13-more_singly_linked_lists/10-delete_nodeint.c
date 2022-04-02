#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to pointer of a listint_t
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next = *head;

	if (index == 0)
	{
		temp = next->next;
		free(next);
		*head = prior;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (-1);
		temp = next;
		next = next->next;
	}
	temp->next = next->next;
	free(next);
	if (index == 0)
		head = &temp;
	return (1);
}
