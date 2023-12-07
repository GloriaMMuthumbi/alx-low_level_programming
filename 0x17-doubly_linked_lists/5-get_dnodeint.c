#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at specific index
 * @head: points to the head of the list
 * @index: index of the node
 * Return: the node at index or NULL if non-existent
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
