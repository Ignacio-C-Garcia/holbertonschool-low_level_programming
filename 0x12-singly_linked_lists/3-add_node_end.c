#include "lists.h"
/**
* _strlen - a function that returns the length of a string.
* @s: a string
* Return: length of s
*/
int _strlen(char *s)
{
	int i;
	int count = 0;

	if (!s)
		return (0);
	for (i = 0; *(s + i) != 0; i++)
	{
		count++;
	}
	return (count);
}
/**
 *add_node_end - A function that adds a new node at the end of a list_t list
 * @head: a pointer to the head
 * @str: a string
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux_node;
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(node->str);
	node->next = NULL;

	if (!head)
	{
		head = &node;
		return (node);
	}

	aux_node = *head;

	while (aux_node->next != NULL)
	{
		aux_node = aux_node->next;
	}

	aux_node->next = node;
	return (node);
}
