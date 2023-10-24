#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: the first pointer
 * Return: Nothing
 */

size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
