#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at specific index
 * @head: points to the head of list
 * @index: the index of node to delete
 * Return: returnds 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	for (i = 0; i < index && cur != NULL; i++)
	{
		prev = cur;
		cur = cur->next;
	}
	if (cur == NULL)
		return (-1);
	prev->next = cur->next;
	if(cur->next != NULL)
		cur->next->prev = prev;
	free(cur);
	return (1);
}
