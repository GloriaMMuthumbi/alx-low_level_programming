#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 * linked list
 * @head: pointer to head of list
 * @index: index of node to get (0-indexing)
 * Return: returns pointer of the nth node. Otherwise
 * if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
			return (head);

		head = head->next;
		c++;
	}

	return (NULL);
}
