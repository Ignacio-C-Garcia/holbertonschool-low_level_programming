#include "lists.h"
/**
 *pop_listint - a function that deletes the head node
 *@head: head of a linked list
 *Return: the n value of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *aux_header;
	int value = 0;

	if (*head)
	{
		aux_header = *head;
		value = (*head)->n;
		*head = aux_header->next;
		free(aux_header);
	}

	return (value);
}
