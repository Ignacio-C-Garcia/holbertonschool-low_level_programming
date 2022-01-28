#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *aux = NULL;
	hash_node_t *head = NULL;

	if (!ht)
		return;


	for (index = 0; index < ht->size; index++)
	{
		aux = ht->array[index];
		while (aux)
		{
			head = aux->next;
			free(aux->key);
			free(aux->value);
			free(aux);
			aux = head;
		}
	}
	free(ht->array);
	free(ht);
}
