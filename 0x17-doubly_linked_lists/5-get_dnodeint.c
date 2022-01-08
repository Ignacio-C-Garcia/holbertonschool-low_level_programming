#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    for (i = 0; i < index; i++)
    {
        if (!head)
            return (NULL);
        else
            head = head->next;
    }

    return (head);
}
