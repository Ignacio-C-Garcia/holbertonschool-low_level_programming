#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	char *print_comma = "";

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];

		while (aux)
		{
			printf("%s'%s': '%s'", print_comma, aux->key, aux->value);
			aux = aux->next;
			print_comma = ", ";
		}
	}
	printf("}\n");
}
