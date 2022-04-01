#include "lists.h"
/**
 * free_listint - free a list
 * @head: a list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
