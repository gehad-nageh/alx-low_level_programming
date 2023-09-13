#include"main.h"
/**
 * main - Entry point
 *
 * Descrption: A C program that prints with print function
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
