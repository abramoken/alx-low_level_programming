#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - a function that frees a list
 * @head: a pointer listint_t structure
 * Return: size of the list that was freed
 */
size_t looped_listint_count(listint_t *head);

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: list if not looped - 0, Otherwise - the number
 * of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *current, *subs;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	subs = (head->next)->next;

	while (subs)
	{
		if (current == subs)
		{
			current = head;
			while (current != subs)
			{
				nodes++;
				current = current->next;
				subs = subs->next;
			}

			current = current->next;
			while (current != subs)
			{
				nodes++;
				current = current->next;
			}

			return (nodes);
		}

		current = current->next;
		subs = (subs->next)->next;
	}

	return (0);
}
