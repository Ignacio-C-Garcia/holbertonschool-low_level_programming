#include "lists.h"
/**
 * sum_dlistint - sum all values of linked list
 * @head: header of linked list
 * Return: sum of values
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}

