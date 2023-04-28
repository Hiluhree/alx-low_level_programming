#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: returns the data (n) of the node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	return (data);
}
