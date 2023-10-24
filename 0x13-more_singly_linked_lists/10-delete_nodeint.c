#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node
 * at a given index of list
 * @head: pointer to pointer of the head of list
 * @index: index of node to be deleted
 * Return: 1 if successful, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *t;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		t = *head;
		*head = t->next;
		free(t);
		return (1);
	}

	cur = *head;
	for (i = 0; cur != NULL && i < index - 1; i++)
		cur = cur->next;

	if (cur == NULL || cur->next == NULL)
		return (-1);

	t = cur->next;
	cur->next = t->next;
	free(t);

	return (1);
}
