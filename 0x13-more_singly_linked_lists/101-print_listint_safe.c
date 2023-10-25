#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - function that reallocates memory for array pointer
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node
 * Return: Nothing
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] - list[i];
	newlist[i] = new;
	free(list);
	return (nrewlist);
}


/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: address of the first point
 * Return: Nothing
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i - 0; i < num; i++)
		{
			if (head == list)
			{
				printf("-> [%p] %d\n ", (void *)head, head->n);
				free(list);
				return (num);
			}
	}
	num++;
	list = r(list, num, head);
	printf("[%p] %d\n", (void *)head, head->n)
	head = head->next;
	}
	free(list);
	return (num);
}
