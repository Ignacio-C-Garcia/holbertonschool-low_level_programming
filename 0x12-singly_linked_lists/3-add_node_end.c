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
	list_t *new_node_cp = *head;
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(node->str);
	node->next = NULL;

	while (new_node_cp)
	{
		if (new_node_cp->next)
		new_node_cp = new_node_cp->next;
		else
		{
			new_node_cp->next = node;
			return (new_node_cp);
		}
	}
	*head = node;
	return (new_node_cp);
}
