#include "lists.h"
#include <string.h>

/**
 * add_nodeint - a function that adds a new nod at the begining of a list
 * @head: a pointer to list_t structure
 * @n: an integer data to put into the new node
 * Return: address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
