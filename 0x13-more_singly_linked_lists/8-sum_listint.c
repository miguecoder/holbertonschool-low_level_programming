#include "lists.h"
/**
 * sum_listint - Function that sum all the data (n)
 * of a listint_t linked list
 * @head: pointer to head node
 * Return: sum of all data n or 0 id the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
