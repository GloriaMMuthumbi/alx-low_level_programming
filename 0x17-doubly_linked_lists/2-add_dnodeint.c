#include "lists.h"
/**
 * add_dnodeint - Adds a new node to the start of list
 * @head: Points to pointer of  head of the list
 * @n: value assigned to the new node
 * Return: returns the address of the new node or NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
