#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: input charachter
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (0);
}