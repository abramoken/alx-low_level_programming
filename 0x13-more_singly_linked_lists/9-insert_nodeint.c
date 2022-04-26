#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position.
 * @head: a pointer to listint_t structure
 * @idx: index of the list starting from 0
 * @n: an integer data for new node
 * Return: address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
