#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
    size_t node_counter = 0;

    while (h)
    {
        node_counter++;
        h = h->next;
    }
    return (node_counter);
}