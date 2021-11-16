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
	listint_t *tmp = *head;
	listint_t *new_node;

	if (!head)
		return (NULL);
	if (!*head && idx != 0)
		return (NULL);

	if (idx != 0)
		for (i = 0; i < (idx - 1); i++)
		{
			if ((*head)->next)
			{
				*head = (*head)->next;
			}
			else
			{
				return (NULL);
			}
		}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = (*head)->next;
		(*head)->next = new_node;
		*head = tmp;
	}
	new_node->n = n;
	return (new_node);
}
