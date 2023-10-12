#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input int
 * @size: size of array
 * @cmp: compare function
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
