#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input int
 * @size: size of array
 * @cmp: replace function
 * Return: Nthing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[i]))
				return (x);
			x++;
		}
	return (-1);
}
