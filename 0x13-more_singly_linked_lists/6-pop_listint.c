#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: address of the first point
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
