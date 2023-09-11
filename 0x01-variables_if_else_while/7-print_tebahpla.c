#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrption: A C program that prints with print function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
