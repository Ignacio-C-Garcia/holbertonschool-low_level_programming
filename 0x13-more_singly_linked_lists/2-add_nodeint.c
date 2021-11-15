#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: header of the linked list
 * @n: value of the node
 * Return: the adress of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
