#include "lists.h"
/**
 * free_listint2 - this function that frees a listint_t list.
 * @head: header of linked list
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		listint_t *aux_head = *head;

		while (*head)
		{
			*head = (*head)->next;
			free(aux_head);
			aux_head = *head;
		}
	}
}
