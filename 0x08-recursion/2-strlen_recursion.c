#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s > '\0')
	{
		k += _strlen_recursion(s + 1) + 1;
	}
	return (k);
}
