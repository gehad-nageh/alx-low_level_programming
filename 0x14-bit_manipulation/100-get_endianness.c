#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: Nothing
 */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
