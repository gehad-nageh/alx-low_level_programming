#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string name
 * @f: function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
