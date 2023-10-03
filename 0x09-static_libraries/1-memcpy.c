#include "main.h"

/**
 * *_memcpy -  function that copies memory area
 * @dest: char input
 * @src: char input
 * @n: int iput
 * Return: Nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
