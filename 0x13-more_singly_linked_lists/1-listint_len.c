#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: header of a linked list
 * Return: a size_t type
 */
size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
