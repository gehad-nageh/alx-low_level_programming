#include "main.h"

/**
 * *create_array - function that creates an array of chars
 * @size: the size of array
 * @c: input char
 * Return: Nothing
 */

char *create_array(unsigned int size, char c)
{
	char *g = malloc(size);

	if (size == 0 || g == 0)
		return (0);

	while (size--)
		g[size] = c;

	return (g);
}
