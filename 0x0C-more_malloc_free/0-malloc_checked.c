#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: input int
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);

	return (i);
}
