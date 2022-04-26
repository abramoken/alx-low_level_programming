#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a list
 * @head: a pointer to listint_t structure
 * Return: address of the node where the loop start, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;

			while (first != second)
			{
				first = first->next;
				second = second->next;
			}

			return (first);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (NULL);
}
