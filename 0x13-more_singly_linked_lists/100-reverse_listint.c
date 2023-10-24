#include "lists.h"
/**
 * reverse_listint - it reverses a linked list
 * @head: pointer to pointer of head in list
 * Return: returns a pointer to the first node of reversed
 * list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head;
	listint_t *prev = NULL;
	listint_t *next;

	while (cur != NULL)
	{
		*next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}

	*head = prev;

	return (*head);
}
