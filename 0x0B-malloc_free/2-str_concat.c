#include "main.h"

/**
 * _strlen - function that find the length of a string
 * @s: string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Nothing
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, j;
	char *h;

	if (s1 == NULL)
		s1  = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	h = malloc((size1 + size2) * sizeof(char) + 1);
	if (h == 0)
		return (0);
	for (j = 0; j <= size1 + size2; j++)
	{
		if (j < size1)
			h[j] = s1[j];
		else
			h[j] = s2[j - size1];
	}
	h[j] = '\0';
	return (h);

}

