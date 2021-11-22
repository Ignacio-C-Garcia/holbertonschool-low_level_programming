#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux1;

	if (!head)
		return (NULL);
	if (!*head)
		return (NULL);

	if ((*head)->next)
		aux1 = (*head)->next;
	else
		return (*head);


	(*head)->next = NULL;

	while (aux1)
	{
		*head = aux1;
		aux1 = aux1->next;
		aux1->next = *head;
	}

	return (*head);

}
