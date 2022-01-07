#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
    size_t node_counter = 0;

    while (h)
    {
        printf("%d\n", h->n);
        node_counter++;
        h = h->next;
    }
    return (node_counter);
}