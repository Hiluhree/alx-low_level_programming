#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: a pointer to the head of the list_t list
 * @str: the string to be added to the list_t list
 *
 * Return: returns NULL if the function fails
 * otherwise, returns the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{	
	char *dup;
	list_t *new_node = malloc(sizeof(list_t));
	int len;

	if (new_node == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
