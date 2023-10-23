#include "lists.h"
/**
 * listint_len - returns the number of elements in list
 * @h: pointer to the head of list
 * Return: returns the number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
