#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input char
 * @accept: input char
 * Return: Nothing
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int p, j;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (j = 0; accept[j] != s[p]; j++)
		{
			if (accept[j] == '\0')
				return (p);
		}
	}
	return (p);
}
