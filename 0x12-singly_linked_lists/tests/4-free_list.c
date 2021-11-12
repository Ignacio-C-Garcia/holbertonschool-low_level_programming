#include "lists.h"
/**
 * free_list - free allocated memory of linked lists
 * @head: header of linked list
 */
void free_list(list_t *head)
{
list_t *aux = head;
if (!aux)
{
	while (!aux)
	{
		while (!aux)
		{
			if (aux->next)
				aux = aux->next;
			else
			{
				free(aux->str);
				free(aux);
			}
		}
		aux = head;
	}
}
}
