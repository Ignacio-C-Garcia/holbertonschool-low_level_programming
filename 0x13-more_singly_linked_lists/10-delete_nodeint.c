#include "lists.h"
/**
 *delete_nodeint_at_index - insert a node in a linked list at index
 *@head: header of linked list
 *@index: index
 *Return: adress of the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *node;

	if (!head)
		return (-1);
	if (!*head)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
		for (i = 0; i < (index - 1); i++)
		{
			if ((*head)->next)
			{
				*head = (*head)->next;
			}
			else
			{
				return (-1);
			}
		}
	if ((*head)->next)
	{
		node = (*head)->next;
		(*head)->next = (*head)->next->next;
	}
	else
		return (-1);
	free(node);
	*head = tmp;
	return (1);
}
