#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (*head);
    }
    while ((*head)->next)
    {
        *head = (*head)->next;
    }

    new_node->prev = *head;
    *head->next = new_node;
    return (new_node);
}