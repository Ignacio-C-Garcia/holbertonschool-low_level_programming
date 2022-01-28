#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	int print_comma = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		if (aux && print_comma == 1)
			printf(", ");
		if (aux)
			print_comma = 1;
		while (aux)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
		}
	}
	printf("}\n");
}
