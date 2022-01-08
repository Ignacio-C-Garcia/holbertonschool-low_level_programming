#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at idx of dll
 * @head: header of dll
 * @index: idx of node
 * Return: 1 on success or -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int i = 0;

	if (!*head && index == 0)
		return (-1);
	if (*head && index == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			free((*head)->prev);
			(*head)->prev = NULL;
		}
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (!*head)
			return (-1);
		*head = (*head)->next;
	}
	if ((*head)->next)
	{
		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;
	}
	else
	{
		(*head)->prev->next = (*head)->next;
	}
	free(*head);
	*head = h;
	return (1);
}
