#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: points to the pointer of the head of the list
 * @n: value of the node to be added
 * Return: returns the address of the new node or NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
