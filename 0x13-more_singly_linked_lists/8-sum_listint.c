#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: the first pointer
 * Return: Nothing
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
