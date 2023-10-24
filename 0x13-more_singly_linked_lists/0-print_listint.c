#include "lists.h"
/**
 * print_listint - prints all elemnts in a list
 * @h: Pointer to the head of the list
 * Return: returns the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
