#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: header of a linked list
 * Return: number of nodes of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (!h)
		exit(-1);


	while (h)
	{

	if (h->str == NULL)
	{	printf("[0] (nil)\n");
		node_count++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		node_count++;
	}

	h = h->next;
	}
	return (node_count);
}
