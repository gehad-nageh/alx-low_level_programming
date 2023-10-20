#include <list.h>

/**
 * _strlen - function to find the length of string
 * @i: the string will be checked
 * Return: the length of integer
 */

int _strlen(char *i)
{
	int j = 0;

	if (!i)
		return (0);
	while (*i++)
		j++;
	return (j);
}

/**
 * print_list - function that prints all the elements of list
 * @h: pointer
 * Return: Nothing
 */

size_t print_list(const list_t *h);
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
