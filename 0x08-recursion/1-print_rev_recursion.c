#include "main.h"

/**
 * print_rev_recursion - function that prints a string in reverse
 * @s:pointer
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
