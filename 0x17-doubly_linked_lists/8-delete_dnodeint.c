#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *h = *head;
    unsigned int i = 0;
    if (!*head && index == 0)
    {
        return (-1);
    }
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
        else
            *head = (*head)->next;
    }

    (*head)->prev->next = (*head)->next;
    (*head)->next->prev = (*head)->prev;
    free(*head);
    *head = h;

    return (1);
}
