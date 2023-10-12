#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: input int
 * @size: size of array
 * @action: pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *elem = array + size - 1;

	if (array && size && action)
		while (array <= elem)
			action(*array++);
}
