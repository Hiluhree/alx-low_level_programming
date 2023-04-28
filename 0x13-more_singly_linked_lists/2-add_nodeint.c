#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - a function that adds a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @n: value to be stored in the new node
 *
 * Return: returns the address of the new node,
 * otherwise, returns NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
