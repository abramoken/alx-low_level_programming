#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - a function that frees a list
 * @head: a pointer listint_t structure
 * Return: size of the list that was freed
 */
void free_list(listint_t *head);

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_list(temp);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - a function that frees a listint_t recursively
 * @head: a pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
