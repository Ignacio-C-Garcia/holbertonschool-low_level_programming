#include "lists.h"
/**
 * get_dnodeint_at_index - return a node at idx
 * @head: header of dll
 * @index: index that statrts in 0
 * Return: return node or NULL if it fails
 */
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
