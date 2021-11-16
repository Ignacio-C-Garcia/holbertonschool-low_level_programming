#include "lists.h"
/**
 * get_nodeint_at_index - return the n node of a linked list
 * @head: header of a linked list
 * @index: number
 * Return: pointer to a node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head)
	for (i = 0; i < index; i++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
