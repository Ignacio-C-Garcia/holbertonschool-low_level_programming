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
 *add_node - A function that adds a new node at the beginning of a list_t list
 * @head: a pointer to the head
 * @str: a string
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
