#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints all elemnts of a linked list
 * @h: pointer to head of list
 * Return: returns the number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;
	size_t length = h->len;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n",0, "(nil)");
		else
			printf("[%lu] %s\n", (unsigned long)length, h->str);

		h = h->next;
		c++;
	}

	return (c);
}
