#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns a number of elements in a linked list.
 * @h: a pointer to listint_t structure
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
