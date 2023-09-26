#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: input char
 * @c: input char
 * Return: Nothing
 */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0' ; p++)
	{
		if (s[p] == c)
		{
			return (s + p);
		}
	}
	return ('\0');
}
