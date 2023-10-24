#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a give position
 * index of list
 * @head: pointer to the pointer of the head of list
 * @idx: index of the node to be deleted (0 indexing)
 * @n: data to be stored in newly inserted node
 * Return: returns address of new node. Otherwise returns
 * NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node_new;
	listint_t *t = *head;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;

	if (idx == 0)
	{
		node_new->next = t;
		*head = node_new;
		return (node_new);
	}

	for (i = 0; i < idx - 1 && t != NULL; i++)
		t = t->next;

	if (t == NULL)
	{
		free(node_new);
		return (NULL);
	}

	node_new->next = t->next;
	t->next = node_new;

	return (node_new);
}
