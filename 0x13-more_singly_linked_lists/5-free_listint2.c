#include "lists.h"
/**
 * free_listint2 - free a list and set the head to NULL
 * @head: a list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	{
		return (0);
	}

	temp = *head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
