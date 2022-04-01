#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: a double pointer type listint_t
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
	{
		return;
	}

	temp = *head;
	data = temp->n;
	temp = temp->next;
	free(temp);
	return (data);
}
