#include "lists.h"
/**
 * sum_listint - sum all data (n) of a linked list
 * @head: header of a linked list
 * Return:the result of the sum
 */
int sum_listint(listint_t *head)
{
	int node_counter = 0;
if (!head)
	return (0);
while (head)
{
	node_counter += head->n;
	head = head->next;
}
return (node_counter);
}
