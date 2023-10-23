#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at end of list
 * @head: pointer of pointer to head of the list
 * @n: value of the node to be added
 * Return: returns address of the new element added.
 * Otherwise returns NULL if fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = *head;
	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}

	while (t->next != NULL)
		t = t->next;

	t->next = node_new;

	return (node_new);

}
