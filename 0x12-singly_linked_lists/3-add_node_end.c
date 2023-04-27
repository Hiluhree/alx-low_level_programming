#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: a pointer to the head of the list_t list
 * @str: the string to be added to the list_t list
 * Return: returns a null if the function fails,
 * otherwise, it returns the address to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int len;

	if (new_node == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (new_node);
}
