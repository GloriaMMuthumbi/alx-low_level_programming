#include "lists.h"
/**
 * add_node_end - adds a new node to end of list
 * @head: pointer to pointer of the head of list
 * @str: string to be duplicated and added to node
 * Return: returns theaddress of new node. otherwise
 * NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_new = malloc(sizeof(list_t));

	if (node_new == NULL)
		return (NULL);

	node_new->str = strdup(str);

	if (node_new->str == NULL)
	{
		free(node_new);
		return (NULL);
	}

	node_new->len = strlen(str);
	node_new->next = NULL;

	if (*head == NULL)
		*head = node_new;
	else
	{
		list_t *cur = *head;

		while (cur->next != NULL)
			cur = cur->next;

		cur->next = node_new;
	}
	return (node_new);
}
