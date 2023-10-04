#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: string
 * Return: Nothing
 */

char *_strdup(char *str)
{
	int j = 0, size = 0;
	char *h;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	h = malloc(size * sizeof(*str) + 1);

	if (h == 0)
		return (NULL);

	else
	{
		for (; j < size; j++)
			h[j] = str[j];
	}
	return (h);

}
