#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: A pointer to the head node of the list
 *
 * Return: returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;

	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}

	(*head)->next = previous;

	return (*head);
}
