#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest:char type string
 * @src: char typi string
 * Description: copy the string pointed to by pointer
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
