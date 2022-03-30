#include "lists.h"
/**
 * _strlen - Funtions that return the length of a string
 * @string: string gived.
 * Return: length of a string
 */
int _strlen(const char *string)
{
	int i;

	for (i = 0; string[i]; i++)
	{
		;
	}
	return (i);
}
/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: string to add to the beginning to head
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicated;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	duplicated = strdup(str);
	length = _strlen(str);

	new->str = duplicated;
	new->len = length;
	new->next = *head;
	*head = new;

	return (*head);
}
