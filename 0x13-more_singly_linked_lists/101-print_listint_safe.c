#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: A pointer to the head node of the list
 *
 * Return: returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		current = current->next;
	}

	return (count);
}