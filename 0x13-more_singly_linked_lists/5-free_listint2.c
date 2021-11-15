#include "lists.h"
/**
 * free_listint2 - this function that frees a listint_t list.
 * @head: header of linked list
 */
void free_listint2(listint_t **head)
{

	if (*head)
	{
		free_listint((*head)->next);
	free(head);
	}
	head = NULL;
}
