#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *head = *h;
    unsigned int i = 0;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (!*h && idx == 0)
    {
        *h = new_node;
        return (new_node);
    }

    for (i = 0; i < idx; i++)
    {
        if (!*h)
            return (NULL);
        else
            *h = (*h)->next;
    }
    new_node->prev = (*h)->prev;
    new_node->next = *h;

    (*h)->prev->next = new_node;
    (*h)->prev = new_node;
    *h = head;
}
