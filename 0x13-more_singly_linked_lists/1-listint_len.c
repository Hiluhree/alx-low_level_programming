#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 * @h: A pointer to the head of the list
 * Return: returnns the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
