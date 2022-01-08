#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: header of linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next)
			free_dlistint(head->next);
		free(head);
	}

}
