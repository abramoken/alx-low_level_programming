#include "lists.h"

/**
 * free_listint2 - a function that frees a list and sets head to NULL
 * @head: a pointer to listint_t structure
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
