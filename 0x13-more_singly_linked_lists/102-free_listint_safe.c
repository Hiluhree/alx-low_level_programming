#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: A pointer to the addres of the head of the listint_t list
 *
 * Return: returns the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL)
	{
		return (0);
	}
	current = *h;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		current = next;

		if (next >= current)
		{
			*h = NULL;
			exit(98);
		}
	}

	*h = NULL;
	return (size);
}
