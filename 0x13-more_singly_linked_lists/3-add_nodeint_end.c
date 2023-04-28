#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @n: value to be stored in the new node
 *
 * Return: returns NULL if the function fails,
 * otherwise, returns the address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
	}

	return (new_node);
}
