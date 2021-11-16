#include "lists.h"
/**
 *insert_nodeint_at_index - insert a node in a linked list at index
 *@head: header of linked list
 *@idx: index
 *@n: value (n) of node
 *Return: adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *header;
	listint_t *new_node;

	if (!head)
		return (NULL);

	if (!*head)
		return (NULL);

	header = *head;

	for (i = 0; i < (idx - 1); i++)
	{
		if (*head)
		{
			*head = (*head)->next;
		}
		else
		{
			*head = header;
			return (NULL);
		}
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		*head = header;
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head)->next;
	(*head)->next = new_node;
	*head = header;

	return (new_node);

}
