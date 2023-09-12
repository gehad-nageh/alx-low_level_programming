#include <main.h>
/**
 * main - Entry point
 *
 * Descrption: A C program that prints with print function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
