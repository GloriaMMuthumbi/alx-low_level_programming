#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data values in list
 * @head: points to the head of list
 * Return: returns the sum of all data values of 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
