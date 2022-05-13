#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head:pointer to a struct list
 * Return: The number of nodes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
