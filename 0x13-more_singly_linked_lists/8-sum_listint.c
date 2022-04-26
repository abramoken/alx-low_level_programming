#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a linked list.
 * @head: a pointer listint_t structure
 * Return: sum of all the data n from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
