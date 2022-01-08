#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *h = *head;
    unsigned int i = 0;
    if (!*head && idx == 0)
    {
        return (-1);
    }

    for (i = 0; i < idx; i++)
    {
        if (!*h)
            return (-1);
        else
            *h = (*h)->next;
    }

    (*head)->prev->next = (*head)->next;
    (*head)->next->prev = (*head)->prev;
    free(*head);
    *head = h;
}