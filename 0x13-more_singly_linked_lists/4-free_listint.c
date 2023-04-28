#include "lists.h"
#include <stdio.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
