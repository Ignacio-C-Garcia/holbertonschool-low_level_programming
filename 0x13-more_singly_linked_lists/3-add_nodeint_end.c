#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: header of linked list
 * @n: value of the node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_aux = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	while (head_aux)
	{
		if (head_aux->next)
		{
			head_aux = head_aux->next;
		}
		else
		{
			head_aux->next = new_node;
			return (new_node);
		}
	}

	*head = new_node;
	return (new_node);
}
