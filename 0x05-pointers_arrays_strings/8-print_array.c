#include "main.h"

/**
 * print_array - print n elements lf an array of integers
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
