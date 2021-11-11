#include "lists.h"
/**
 * list_len - counts the number of elements in a linked list
 * @h: header of a linked list
 * Return: number of nodes of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
	h = h->next;
	node_count++;
	}
	return (node_count);
}
