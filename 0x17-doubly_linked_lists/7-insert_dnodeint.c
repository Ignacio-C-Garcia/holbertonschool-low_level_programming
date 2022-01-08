#include "lists.h"
/**
 * dlistint_len - return number of nodes of a linked list
 * @h: header
 * Return: a number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
/**
 * insert_dnodeint_at_index - add a node at the idx of dll
 * @h: header of dll
 * @idx: index to add new node
 * @n: value number of node
 * Return: return new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *head = *h;
unsigned int i = 0;
dlistint_t *new_node;

if (idx == 0)
return (add_dnodeint(h, n));
if (idx == dlistint_len(*h))
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

for (i = 0; i < idx && *h; i++)
*h = (*h)->next;
if (!*h)
{
free(new_node);
return (NULL);
}
new_node->prev = (*h)->prev;
new_node->next = *h;

(*h)->prev->next = new_node;
(*h)->prev = new_node;
*h = head;
return (new_node);
}
