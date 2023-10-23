#include "lists.h"
/**
 * add_nodeint - adds a new node to list at the beginning
 * @head: a pointer to another pointer of the head of the list
 * @n: value to be added in the new node
 * Return: returns the address of the new element. Otherwise
 * NULL if fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
