#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *header = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!*head)
	{
		return (NULL);
		free(new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
		}
		else
		{
			return (NULL);
		}
	}

	new_node->next = (*head)->next;
	(*head)->next = new_node;
	*head = header;

	return (new_node);

}
