#include "lists.h"
/**
 * pop_listint - deletes the head node of list and returns
 * head node's data (n)
 * @head: pointer to pointer of the head of list
 * Return: returns head node's data. Otherwise returns 0
 * if list is empty.
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *t;

	if (*head == NULL)
		return (0);

	d = (*head)->n;
	t = *head;
	*head = (*head)->next;
	free(t);

	return (d);
}
