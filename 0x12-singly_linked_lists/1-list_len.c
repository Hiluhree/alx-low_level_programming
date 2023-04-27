#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: the linked list_t list
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		numberOfElements++;
		h = h->next;
	}

	return (numberOfElements);
}
