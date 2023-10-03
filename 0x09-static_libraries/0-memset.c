#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: input char
 * @b: input char
 * @n: input int
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; n > 0; p++, n--)
	{
		s[p] = b;
	}

	return (s);
}
