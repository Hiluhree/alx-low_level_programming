#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: returns the address of the node where the loop starts, otherwise
 * returns NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (hare);
		}
	}

	return (NULL);
}
