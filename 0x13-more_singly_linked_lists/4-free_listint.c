#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head of list
 * Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;

		free(t);
	}
}
