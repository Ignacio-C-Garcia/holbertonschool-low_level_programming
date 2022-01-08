#include "lists.h"
/**
 * print_dlistint - print a linked list
 * @h: header of dll
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
