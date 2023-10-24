#include "lists.h"
/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer of pointer to head of list
 * Returns: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *cur, *t;

	cur = *head;


	while (cur != NULL)
	{
		t = cur;
		cur = cur->next;
		free(t);
	}

	*head = NULL;
}
