#include "lists.h"
/**
 * add_node - adds a new node at the start of list
 * @head: pointer to pointer of head of list
 * @str: string to be dulicated and added to new node
 * Return: returns address of new element. otherwise
 * NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new = malloc(sizeof(list_t));

	if(node_new == NULL)
		return (NULL);

	node_new->str = strdup(str);

	if(node_new->str == NULL)
	{
		free(node_new);
		return (NULL);
	}

	node_new->len = strlen(str);
	node_new->next = *head;

	*head = node_new;

	return (node_new);
}
