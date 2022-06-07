#include "hash_tables.h"
/**
 * hash_table_delete - function that delete a has table.
 * @ht: is the hash table you want
 * to add or update the key/value to
 * Return: nothing, only delate the has table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *nodo_temp;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			nodo_temp = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = nodo_temp;
		}
	}
	free(ht->array);
	free(ht);
}
