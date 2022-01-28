#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table
 * @key: str (not empty)
 * @value: str
 * Return: 1 on succes or 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node;
	hash_node_t *aux = NULL;

	if (!key)
		return (0);
	if (strlen(key) == 0)
		return (0);
	if (!value)
		return (0);

	if (!ht)
		return (0);
	if (!ht->array)
		return (0);

	index = key_index((unsigned char *)key, 1024);
	aux = ht->array[index];
	while(aux)
	{
		if (aux->key == key)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
