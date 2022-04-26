#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: a pointer to listint_t structure
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
