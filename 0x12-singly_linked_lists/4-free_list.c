#include "lists.h"
/**
 * free_list - free allocated memory of linked lists
 * @head: header of linked list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		free(head->str);
		free(head);
	}
}
