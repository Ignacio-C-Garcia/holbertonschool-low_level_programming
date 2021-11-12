#include "lists.h"
/**
 * free_list - free allocated memory of linked lists
 * @head: header of linked list
 */
void free_list(list_t *head)
{
list_t *aux;
	while (!head)
	{
		aux = head;
		head = head->next;
		free(aux->next);
		free(aux->str);
		free(aux);
	}

}
