#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a struct
 * Return: number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	int node_counter = 0;

	while (h)
	{
		node_counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_counter);
}
