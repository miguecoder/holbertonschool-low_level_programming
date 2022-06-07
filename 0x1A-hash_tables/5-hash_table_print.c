#include "hash_tables.h"
/**
 * hash_table_print - function that print a has table.
 * @ht: is the hash table you want
 * to add or update the key/value to
 * Return: nothing, only print the has table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int i = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			if (i)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			i = 1;
			ht->array[index] = ht->array[index]->next;
		}
	}
	printf("}\n");
}
