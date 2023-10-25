#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the first pointer
 * @index: the index of the node
 * Return: Nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int k;

	for (node = head, k = 0; node && k < index; node = node->next, k++)
		;
	return (node);
}
