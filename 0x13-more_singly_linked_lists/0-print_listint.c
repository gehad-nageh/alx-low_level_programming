#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: first pointer
 * Return: Nothing
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
