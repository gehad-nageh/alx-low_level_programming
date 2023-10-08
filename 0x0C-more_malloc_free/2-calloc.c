#include "main.h"

/**
 * *_fill - function to fill memmory with constant byte
 * @i: pointer
 * @c: constant
 * @n: max number of bytes
 * Return: Nothing
 */

char *_fill(char *i, char c, unsigned int n)
{
	char *ptr = i;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - function that allocates memory for an array using malloc
 * @nmemb: array length
 * @size: the size of element
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_fill(m, 0, sizeof(int) * nmemb);

	return (m);
}
