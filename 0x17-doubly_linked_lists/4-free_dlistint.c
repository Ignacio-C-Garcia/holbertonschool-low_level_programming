#include "lists.h"
void free_dlistint(dlistint_t *head)
{
    if (!head)
        return
    if (head->next)
        free_dlistint(head->next);
    free(head);

}