#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: str
 * Return: value associated with key or NULL if fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux = NULL;

	if (!key)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	if (!ht)
		return (NULL);
	aux = ht->array[key_index((unsigned char *)key, ht->size)];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}

	return (NULL);
}
